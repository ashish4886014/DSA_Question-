#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next = NULL;

    }
    Node(){

    }
};

class myNodeList{
    private:
    Node* head ;
    Node* tail;
    int length  ;
    public :
    myNodeList(){
        head =  tail = NULL;
        length  = 0;
    }

    void insertAtHead(int val){
        Node* n = new  Node(val);
        if(length  == 0 ){
            head  = tail = n; 
        }
        else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void insertAtTail(int val){
        Node* n =new Node(val);
        if(length ==0 ){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }
    void insert(int idex , int val){
        if(idex == 0){
            insertAtHead(val);
            return ;
        }
        if(idex < 0 or idex >= length ){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head;
        Node* n = new Node(val);
        for(int i= 1 ; i <= idex -1 ; i++){
            temp = temp->next ;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
        
    }

    void get(int idex){
        if(idex == 0){
            cout<<head->val<<endl;
            return ;
        }
        if(idex < 0 or idex >= length){
            cout<<"invalied index";
        }
        Node* temp = head ;
        for(int  i= 1 ; i <= idex - 1 ; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }

    void DeleteHead(){
        head = head->next;
        length--;

    }
    void print(){
        Node* temp = head  ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void removeDuplicates(){
        Node* temp = head ;
        Node* dummy = new Node(-1);
        Node* temp1 = dummy;
        while(temp != NULL ){
            if(temp->val == temp->next->val){
                Node* x = temp->next;
                while(x != NULL && x->val == temp->val){
                    x = x->next;
                }
                temp1->next = x;
                temp1 = x;
                temp = x;
                
            }
            else{
                temp1->next = temp;
                temp1 = temp;
                temp = temp->next;
            }
        }
       head = dummy->next;
  
}


};

int main(){
    myNodeList a;
    a.insertAtHead(89);
    a.insertAtHead(89);
    a.insertAtHead(89);
    a.insertAtHead(89);
    a.insertAtHead(69);
    a.insertAtHead(59);
    a.insertAtHead(34);
    a.insertAtHead(9);
    a.print();
   a.removeDuplicates();
   a.print();
   
    

}