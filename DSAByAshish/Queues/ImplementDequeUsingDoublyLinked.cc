#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next ;
    Node* prev ;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;                
    }
};
class MyDeque{
    private :
    Node* head ;
    Node* tail ;
    int length ;
    public :
    MyDeque(){
        head = tail = NULL;
        length =0;
    }
    void push_front(int val){
        Node* n = new Node(val);
        if(length == 0){
            head = tail = n;
        }
        else{
            head->prev = n;
            n->prev = NULL;
            n->next = head;
            head  = n;
        }
        length++ ;
    }
    void push_back(int val){
        Node* n = new Node(val);
        if(length ==0){
            head = tail = n;
        }
        else{
            tail->next = n;
            n->prev = tail ;
            n->next = NULL;
            tail = n;
        }
        length++;
    }
    void pop_front(){
        if(length ==0){
            cout<<"Deque is empty ";
            return ;
        }
        Node* del = head ;
         if(head == tail){
            head = tail = NULL;
        }
        else{
            Node* del = head ;
            head  = head->next;
            head->prev = NULL ;          
        }
        length--;
        delete del;
    }
    void pop_back(){
        if(length == 0){
            cout<<"Deque is empty";
            return ;
        }
         Node* del = tail ;
         if( head == tail){
             head = tail = NULL;
         }
        else {         
            tail  = tail->prev ;
            tail->next = NULL;
        }
        length--;
        delete del;
    }
    void front(){
        if(length ==0){
            cout<<"deque is empty";
            return ;
        }
        else{
            cout<<head->val<<endl;
        }
    }
    void back(){
        if(length == 0){
            cout<<"empty Deque";
            return ;
        }
        else{
            cout<<tail->val<<endl;
        }
    }
    void clear(){
        if(length == 0){
            cout<<"empty deque";
            return ;
        }
        while(head != NULL){
            Node* del = head ;
            head = head->next;
            delete del;
        }
        tail = NULL;
        length =0;
    }
    bool empty(){
        if(length == 0){
            return true ;
        }
        else{
            return false;
        }
    }
    void size(){
        cout<<length<<endl;
    }
    void display(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

};
int main(){
    MyDeque q;
    q.push_front(12);
    q.push_front(23);
    q.push_front(67);
    q.push_front(45);
    q.display();
    q.push_back(78);
    q.display();
    q.push_front(89);
    q.display();
    q.clear();
   cout<< q.empty()<<endl;
    return 0;
}