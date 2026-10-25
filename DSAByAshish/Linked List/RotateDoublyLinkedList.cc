#include <iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next  ;
    Node* prev ;
    Node(int val ){
        this->val = val;
        this->next  = NULL;
        this->prev =  NULL;

    }

};

class doublyLinkedList {
    private :
    Node* head ;
    Node* tail ;
    int length ;
    public :
    doublyLinkedList (){
        head = tail = NULL;
        length = 0;
    }
    void Display(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
    void reverse(){
        Node* temp = tail ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp =temp->prev;
        }
        cout<<endl;
    }
    void insertAtHead(int val){

        Node* n = new Node(val);
        if(length == 0 ){
            head = tail = n;
        }
        else{
            n->next = head ;
            head->prev  = n;
            head = n;

        }
        length++;
    }
    void insesrtAttail(int val){
        Node* n  = new Node(val);
        if(length ==0){
            head = tail = n;
        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
        length++;
    }
    void insertAt(int idex , int val){
        if(idex == 0){
            insertAtHead(val);
            return ;
        }
        else if(idex == length -1 ){
            insesrtAttail(val);
            return ;
        }
        else if( idex < 0  or idex >=  length ){
            cout<<"inavalied index ";
            return ;
        }
        else{
            Node* n =new Node(val);
            Node* temp = head ;
            for(int i= 1 ;i <= idex - 1 ; i++){
                temp = temp->next ;

            }
            n->next = temp->next;
            n->next->prev = n;
            temp->next =  n;
            n->prev = temp;
        }
        length++;
    }
    void get(int idex){
        if(idex == 0){
            cout<<head->val<<endl;
            return ;

        }
         else if(idex == length -1){
            cout<<tail->val<<endl;
            return ;

        }
        else if(idex < 0 or idex >= length){
            cout<<"invalied index ";
            return ;
        }
        else{
            Node* temp = head ;
            for(int i = 1  ; i <= idex ; i++){
                temp = temp->next ;
            }
            cout<<temp->val<<endl;
        }

    }
    void DeleteAtHead(){
        head = head->next;
        head->prev = NULL;
        length--;
        Display();
    }
    void DeleteAtTail(){
        if(length ==0){
            DeleteAtHead();
            Display();
            return ;
        }
        else {
            tail = tail->prev ;
            tail->next = NULL;
            length--;
            Display();
        }

    }
    void DeleteAt(int idex){
        if(idex == 0){
            DeleteAtHead();
            Display();
            return;
        }
        else if(idex == length -1 ){
            DeleteAtTail();
            Display();
            return ;

        }
        else{
            Node* temp = head ;
            for(int i= 1 ; i <= idex- 1 ; i++){
                temp = temp->next ;
            }
            Node* del = temp->next ;
            if(temp->next != NULL){
                 temp->next = temp->next->next ;
                temp->next->prev = temp;
            }
            delete del;
        }
        Display();
    }
    Node* RotateDoublyLinkedList(int k){
        Node* temp = head ;
        Node* head2 = NULL;
        Node* a = NULL;
        Node* b = NULL;
        if(length != 0 ){
             k = k % length ;
        }
        if(length ==0 || k <= 0){
            return head;
        }
       
        for(int i =1 ;  i <= length ; i++){       
            if(i == length - k +1 ){
                head2 = temp;
            }
            if(i == length -k){
                a = temp;
            }
            if(i == length){
                b = temp ;
            }
            temp = temp->next;

        }

        a->next = NULL;
        head2->prev = NULL;
        b->next = head ;
        head->prev = b;
        head = head2;
        return head;

    }
};
int main(){
    doublyLinkedList a;
    a.insertAtHead(7);
    a.insertAtHead(6);
    a.insertAtHead(5);
    a.insertAtHead(4);
    a.insertAtHead(3);
    a.insertAtHead(2);
    a.insertAtHead(1);
    a.Display();
    // a.DeleteAt(2);
    // a.reverse();
    a.RotateDoublyLinkedList(3);
    a.Display();
    return 0;

}