#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next ;
    Node(int val){
        this->val = val ;
        this->next  = NULL;
    }
};
class myLinkedList{
    private :
    int length  ;
    Node* head ;
    Node* tail ;
    public :
    myLinkedList(){
        head  = tail = NULL;
        length = 0 ;

}
void insertAtHead(int val){
    Node* n = new Node(val);
    if(length  == 0 ){
        head = tail   = n;
    }
    else{
        n->next = head ;
        head  = n;

    }
    length++;
}
void insertAtTAil(int val){
    if(length ==0 ){
        insertAtHead(val);
        return ;
    }
    else{
         Node* n = new Node(val);
         tail->next = n;
         tail = n;
         length++;
    }

   
}
void insertAt(int idex , int val){
    if(idex == 0){
        insertAtHead(val);
        return ;
    }
    else if(idex == length -1){
        insertAtTAil(val);
        return ;
    }
    else if(idex < 0 or idex >= length){
        cout<<"invalied index ";
        return ;
    }
    else{
        Node* n = new Node(val);
        Node* temp  = head ;
        for(int i= 1 ; i <=idex -1 ; i++){
            temp = temp->next;
        }
        n->next = temp->next ;
        temp->next = n;
        length++;
    }
}
void get(int idex){
    if(idex == 0){
        cout<<head->val<<endl;
        return ;
    }
    else if(idex  == length -1){
        cout<<tail->val<<endl;
        return ;
    }
    else if(idex < 0 or idex >= length){
        cout<<"inavlied index ";
        return ;
    }
    else{
        Node* temp = head ;
        for(int i = 1 ; i <= idex ; i++){
            temp = temp->next ;
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
    Node* temp = head ;
    for(int i = 1 ; i<= length -2 ; i++){
        temp = temp->next ;
    }
    tail = temp;
    tail->next = NULL;
    length--;
}
void DeleteAt(int idex){
    if(idex == 0){
        DeleteAtHead();
        return ;
    }
    else if(idex == length -1){
        DeleteAtTail();
        return ;
    }
    else if( idex < 0 or idex >= length ){
        cout<<"invalied index ";
        return ;
    }
    else {
        Node* temp  = head ;
        for(int i= 1 ; i <=idex -1 ; i++){
            temp = temp->next ;
        }
        Node* del  = temp->next;
        temp->next = temp->next->next ;
        delete del;
        length --;
    }
}
Node* PositionOddEvent(){
    Node* dummy1 = new Node(-1);
    Node* dummy2 = new Node(-2);
    Node* temp  = head ;
    int idex = 0 ;
    Node* temp1 = dummy1 ;
    Node* temp2 = dummy2 ;
    while(temp != NULL){
        Node* nextNode = temp->next ;
        if(idex % 2 == 0){          //! even case
            temp1->next = temp;
            temp1 = temp;
        }
        else{
            temp2->next = temp;     //! odd case
            temp2 = temp ;
        }
        temp = nextNode ;
        idex++;
    }
    temp1->next = NULL;
    temp2->next = dummy1->next ;
    head  = dummy2->next ;
    return head;

}


};
int main(){
    myLinkedList a;
    a.insertAtTAil(34);
    a.insertAtTAil(456);
    a.insertAtTAil(2);
    a.insertAtTAil(12);
    a.insertAtTAil(46);
    a.insertAtTAil(67);
    a.Display();
    a.PositionOddEvent();
    a.Display();
    return 0;

}