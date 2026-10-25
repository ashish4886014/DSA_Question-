#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next ;
    Node(int val){
        this->val = val ;
        this->next = NULL;
    }
    Node(){

    }
};
class MyLinkedList{
    private :
       Node* head ;
       Node* tail;
       int length ;
    public :
   
    MyLinkedList(){
       head = tail = NULL;
        length = 0;
    }
   
    void display(){
        Node* temp = head ;
        while(temp !=  NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
       if(length == 0){
        tail = head  = n;
        
       }
       else{
        tail->next = n;
        tail = n;

       }
       length++;
    
    }
    void insertAtHead(int val){
        Node* n =  new Node(val);
        if(length == 0){
            tail = head = n;
           
        }
        else{
             n->next = head ;
             head =  n;
        }
        length++ ;
       
    }
    void DeleteAtHead(){
        head = head->next;
        length--;

    }
    void size(){
        cout<<length<<endl;
    }
    void insert(int idex , int val){
        Node* n = new Node(val);
        Node* temp = head ;
        if(idex == 0){
            insertAtHead(val);
            return ;
        }
        if(idex  < 0 or idex > length){
            cout<<"invalied index";
            return ;
        }
        for(int i= 1 ; i <= idex-1 ; i++){
            temp = temp->next;

        }
        n->next = temp->next;
        temp->next = n;
        length++;
       
    }
    void get(int idex){
        if(idex == 0){
            cout<<head->val<<endl;

        }
        if(idex < 0  or idex > length){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int i= 1 ; i <= idex ; i++){
            temp = temp->next;

        }
        cout<<temp->val<<endl;
    }
    void Delete(int idex){
        if(idex ==0){
            DeleteAtHead();

        }
        if(idex < 0 or idex > length){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int i =1 ; i <= idex -1 ; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        length--;
         if(idex = length - 1) {
             tail = temp;
        }
   
    }
    Node* swapNode(){
        Node* slow  = head ;
        Node* fast = head ;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        Node* head2 = slow->next ;
        slow->next = NULL;
        Node* dummy  = new Node(-1);
        Node* temp  = dummy ;
        Node* temp1 = head ;
        int idex = 1;
        while(temp1 != NULL && temp != NULL){
            if(idex % 2 == 0){
                temp->next = head2 ;
                temp = head2 ;
                head2 = head2->next ;
            }
            else{
                temp->next = temp1;
                temp = temp1 ;
                temp1 = temp1->next;
            }
            idex++;

        }
        head = dummy->next ;

    }

    

};


int main(){
    MyLinkedList a;
    a.insertAtHead(43);
    a.insertAtHead(54);
    a.insertAtHead(67);
    a.insertAtHead(23);
    a.insertAtHead(5);
    a.insertAtHead(23);
    a.insertAtHead(34);
    a.insertAtHead(12);
    a.display();
    a.swapNode();
    a.display();
    return 0;

}