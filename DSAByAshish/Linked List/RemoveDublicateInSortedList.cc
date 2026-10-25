#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    Node(){

    }

};

class MyNodeList{
    private:
    Node* head ;
    Node* tail;
    int length ;

    public:
  
    MyNodeList(){
        head  = tail = NULL;
        length  = 0;

    }

    void insertAtHead(int val){
         Node*  n  = new Node(val);
        if(length ==0){
            head  = tail = n;         
         }
        else{
             n->next = head;
             head  = n; 
        }     
       length++;  
    }
    void insertAtTail(int val){
          Node* n = new Node(val);
        if(length  == 0 ){
            head  = tail = n;
        }
        else{
            
        tail->next = n;
        tail = n;

        }      
        length++;
    }
    void insert( int idex ,int val){       
        if(idex  ==  0){
            insertAtHead(val);
            return ;
        }
        if(idex < 0 or idex >= length){
            cout<<"invalied index";
            return ;
        }
        Node* n = new  Node(val);
        Node* temp = head ;
        for(int i =1  ; i <= idex - 1  ;i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }
    void size(){
        cout<<length<<endl;
    }
    void print(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void DeleteAtHead(){
        head = head->next;
        length--;
    }
    void DeleteAt(int idex){
        if(idex == 0){
            DeleteAtHead();
            return ;
        }
        if(idex < 0 or idex >= length ){
            cout<<"invalied index ";
            return ;
        }
        Node* temp = head;

        for(int i = 1 ; i <= idex - 1 ; i++){
            temp = temp->next ;

        }
        temp->next = temp->next->next;
        length--;
    }

    void get(int idex){
        if(idex ==0 ){
            cout<<head->val<<endl;
            return ;
        }
        if(idex < 0 or idex >= length){
            cout<<"invaliled index";
            return ;

        }
        Node* temp = head ;

        for(int i= 1 ; i < idex - 1 ; i++){
            temp = temp->next ;
        }
        cout<<temp->val<<endl;
    }

    void removeDuplicates(){
        Node* temp = head ;
        while(temp != NULL && temp->next != NULL ){
            if(temp->val == temp->next->val){
                 Node* x = temp->next;
            while(x != NULL && x->val == temp->val){
                x = x->next;
            }
             temp->next  = x;
            }
            else{
                temp = temp->next;
            }

        }
    }
};
int main(){
    MyNodeList a;
    a.insertAtHead(23);  
    a.insertAtHead(23);
    a.insertAtHead(45);
    // a.insert(2, 45);   
    a.insertAtTail(55);
    a.insertAtTail(74);
    a.insertAtTail(74);
    a.print();
    a.removeDuplicates();
    a.print();
    return 0;
}