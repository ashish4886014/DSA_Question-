#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next ;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }


};

class MyDoublyLinkedList{
    private:
      Node* head ;
      Node*  tail;
      int length ;

    public:
    MyDoublyLinkedList(){
        head = tail  = NULL;
        length = 0;
    }
    void display(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

   void  insertAtHead(int val){
    Node* n= new Node(val);
    if(length == 0){
        tail = head = n;
    }
    else{
         n->next = head ;
         head->prev = n;
         head  = n;
       
    }
    length++;
    
   }

   void insertAtTail(int val){
    Node* n = new Node(val);
    if(length == 0 ){
        tail = head  = n;
    }
    else{
        tail->next = n;
        n->prev = tail;
        tail = n;

    }
    length++;

   }
   void size(){
     cout<<length<<endl;
   }
   void insert(int idex , int val){
    if(idex == 0 ){
        insertAtHead(val);
        return ;
    }
    if(idex < 0  or idex >= length ){
        cout<<"invalied index";
        return ;
    }
    Node* n =new  Node(val);
    Node* temp = head ;
     for(int i = 1 ; i <=  idex - 1 ; i++){
         temp = temp->next ;
       }
       n->next = temp->next;   
       temp->next->prev = n;
          temp->next = n;
       n->prev = temp;
       length++;

   }
   void get(int idex ){
    if(idex == 0 ){
        cout<<head->val<<endl;
        return ;
    }
    if(idex < 0 or idex >= length){
        cout<<"invalied index";
        return ;

    }
    Node* temp   = head ;
    for(int i = 0  ; i <= idex -1 ; i++){
        temp = temp->next ;
    }
    cout<<temp->val<<endl;

   }
   void DeleteAtHead(){
    head = head->next;
    head->prev = NULL;
    length--;
    display();
   }
   void DeleteAtTail(){
    if(length ==0 ){
        DeleteAtHead();
        return ;
    }
    else{
        tail = tail->prev;
        tail->next  = NULL;
        length--;
    }
    display();
    
   }
   void DeleteAt(int idex){
    if(idex == 0){
        DeleteAtHead();
        return ;
    }
    if(idex == length -1){
        DeleteAtTail();
        return ;
    }
    if(idex < 0 or idex >= length ){
        cout<<"invalied index";
        return ;
    }
    Node* temp = head ;
    for(int i =1  ; i <= idex - 1 ; i++){
        temp = temp->next;
    }
      Node* del = temp->next ;
      temp->next   = temp->next->next;
      if(temp->next  != NULL){
        temp->next->prev = temp;
      }
      else{
        tail = temp;

      }
    length--;
    display();

   }

   void Reverse(){
    Node* temp = tail ;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev ;
    }
    cout<<endl;
   }
  
};
int main(){
    MyDoublyLinkedList a;
    a.insertAtHead(34);
    a.display();
    a.insertAtHead(45);
    a.display();
    a.insertAtTail(56);
    a.display();
    a.size();
    a.insert(2,67);
    a.display();
    a.Reverse();
    // a.DeleteAtTail();
    // a.DeleteAtHead(); 
    // a.DeleteAt()
    // a.DeleteAt(2);
    // a.DeleteAt(1);
    

    return 0;
}