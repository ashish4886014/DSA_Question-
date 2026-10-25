#include<iostream>
using namespace std ;
class Node{
    public:
    int val;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class myLinkedList{
    private:
    Node* head ;
    Node* tail ;
    int length ;
    public :
    myLinkedList(){
        head = tail = NULL;
        length  =0 ;
    }
    void insertAtHead (int val){
        Node* n = new Node(val);
        if(length == 0){
            head = tail = n;
        }
        else {
            n->next = head ;
            head  = n;
        }
        length++;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length  == 0  ){
            head = tail =  n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insertAt(int idex , int val){
        if(idex == 0 ){
            insertAtHead(val);
            return ;
        }
        else if(idex == length -1){
            insertAtTail(val);
            return ;

        }
        else if(idex < 0 or idex >= length ){
            cout<<"invalied index";
            return ;
        }
        else{
            Node* n = new Node(val);
            Node* temp = head ;
            for(int i = 1; i <= idex -1 ; i++){
              temp = temp->next ;

            }
            n->next = temp->next ;
            temp->next = n;
            length++;
        }
       
    }
    void get(int idex ){
        if(idex ==0 ){
            cout<<head->val<<endl;
            return ;
        }
        if(idex == length -1){
            cout<<tail->val<<endl;
            return ;
        }
        else{
            Node* temp = head ;
            for(int i =1 ; i <= idex ; i++){
                temp  = temp->next ;
            }
            cout<<temp->val<<endl;
        }
    }
    void Display(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
    void DeleteAtHead(){
        head = head->next ;
        length--;
    }
    void DeleteAtTail(){
        Node* temp =  head ;
        for(int i =1 ; i <= length-2 ; i++){
            temp = temp->next;
        }
        tail = temp;
        tail->next = NULL;
        
        length--;
    }
    void Delete(int idex){
        if(idex == 0){
            DeleteAtHead();
            return ;
        }
        else if(idex == length -1){
            DeleteAtTail();
            return ;
        }
        else if(idex < 0 or idex >= length ){
            cout<<"invalied index ";
            return ;

        }
        else{
            Node* temp = head ;
            for(int i =1 ; i <= idex -1 ; i++){
                temp =  temp->next ;
            }
            temp->next = temp->next->next;
            length--;
        }
    }
    Node* oddEvenLinkedList(){
        Node* dummy1  = new Node(-1);
        Node* dummy2  = new Node(-2);
        Node* temp = head  ;
        Node* temp1  = dummy1 ;
        Node* temp2  = dummy2 ;

        while(temp != NULL){
            Node* nextNode = temp->next ;
            if((temp->val) %2 == 0){
                temp1->next = temp;
                temp1 = temp;
            }
            else{
                temp2->next = temp;
                temp2 = temp;        
              }
              temp = nextNode ;
        }
        temp1->next = NULL ;
        temp2->next  = dummy1->next ;
        head = dummy2->next ;
        return head ;
    }
  
    
};
int main(){
        myLinkedList a;
    a.insertAtHead(23);
    a.insertAtHead(3);
    a.insertAtHead(4);
    a.insertAtHead(54);
    a.insertAtHead(67);
    a.insertAtHead(56);
    a.Display();
    a.oddEvenLinkedList();
    a.Display();

}