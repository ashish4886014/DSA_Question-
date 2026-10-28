#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* next ;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
class MYQueue{
    private :
    Node* head ;
    Node* tail ;
    int length ;
    public :
    MYQueue(){
        head = tail = 0;
        length = 0;
    }
    void Push(int val){
        Node* n = new Node(val);
        if(length == 0){
            head = tail = n;
        }
        else{
            tail->next = n;
            n->next = NULL;
            tail = n;
        }
        length++;
    }
 
    void Front(){
        if(length ==0 ){
            cout<<"Not front element";
            return ;
        }
        else{
            cout<<head->val<<endl;
            return ;
        }
    }
    void Back(){
        if(length ==0 ){
            cout<<"not Bacl Element";
            return ;
        }
        else{
            cout<<tail->val<<endl;
            return ;
        }
    }
    void Size(){
        if(length ==0){
            cout<<"Queue is Empty";
            return ;
        }
        else{
            cout<<length<<endl;
            return ;
        }
    }
    void pop(){
        if(length ==0){
            cout<<"empty Queue";
            return;
        }
        Node* del = head ;
        head = head->next ;
        delete del;
        length--;

        if (length == 0) {
        tail = NULL;
    }
    }
    void Reverse(){
       stack<int> st ;
       Node* temp = head ;
       while(temp != NULL){
        st.push(temp->val);
        temp = temp->next ;
       }

       temp = head;
       while(st.size() > 0){
        temp->val = st.top();
        st.pop();
        temp = temp->next ;
       }     
    }
    void Display(){
        Node*  temp = head ;
        while( temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void GetAtIndex(int idex){
        if(idex == 0){
            Front();
            return ;
        }
        else if( idex < 0 or idex >= length){
            cout<<"invalied index ";
            return ;
        }
        Node* temp  = head ;
        for(int i= 0  ; i <= idex ; i++){
            temp = temp->next ;
        }
        cout<<temp->val<<endl;

    }
    void DeleteAtIndex(int idex){
        if(idex == 0){
             pop();
            return ;
        }
        else if(idex < 0 or idex >= length){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int i =0 ; i< idex ; i++ ){
            temp= temp->next;
        }
        Node* del = temp->next ;
        temp->next = temp->next->next;
        delete del;
        length--;
    }
    void PushAtIndex (int idex , int val){
         Node* n = new Node(val);
        if(idex <  0 or idex >=length){
            cout<<"invalied index";
            return ;
        }      
        else if (idex == 0){
            n->next = head ;
            head  = n;
        }
        else{
            Node* temp = head ;
            for(int i= 0  ; i < idex ; i++){
                temp = temp->next;
            }
            n->next = temp->next ;
            temp->next = n ;           
        }
        length++;
    }
};
int main(){
    MYQueue q;
    q.Push(23);
    q.Push(34);
    q.Push(34);
    q.Push(34);
    q.Push(34);
    q.Push(45);
    q.Display();
    q.Reverse();
    q.pop();
    q.Display();
    q.Back();
    q.Size();
    q.Front();

    


    q.Display();

    return 0;

}