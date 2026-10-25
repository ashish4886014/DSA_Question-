#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next ;
    Node* prev ;
    Node(int val){
        this->val = val;
        this->next =NULL;
        this->prev = NULL;
    }
};
class myDoublyLinkedList{
    private:
    Node* head ;
    Node* tail;
    int length ;
    public:
    myDoublyLinkedList(){
        tail = head  = NULL;
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
    void insertAthead(int val){
        Node* n = new Node(val);
        if(length == 0 ){
            head = tail = n;
        }
        else{
            n->next = head ;
            head->prev = n;
            head = n;
        }
        length++;
    }
    void insertAtTail(int val){
        if(length ==0 ){
            insertAthead(val);
            return ;
        }
        Node* n = new Node(val);
        tail->next = n;
        n->prev = tail ;
        tail   = n;
        length++;
    }

    void size(){
        cout<<length<<endl;
    }
    void inssertAt(int idex , int val){
        if(idex == 0){
            insertAthead(val);
            return ;
        }
        else if(idex == length -1 ){
            insertAtTail(val);
            return ;
        }
        else if(idex < 0 or idex >= length ){
            cout<<"invalied  index ";
            return ;
        }
        else{
            Node* n  = new Node(val);
            Node* temp = head ;
            for(int i = 1 ; i <= idex -1 ; i++){
                temp = temp->next ;
            }
            n->next = temp->next ;
            temp->next->prev = n;
            temp->next = n;
            n->prev = temp;
            length++;
        }
    }
    void get(int idex ){
        if(idex == 0){
            cout<<head->val<<endl;
            return ;
        }
        else if(idex == length -1){
            cout<<tail->val<<endl;
            return ;
        }
        else if(idex < 0  or idex >= length ){
            cout<<"invalied index ";
            return ;
        }
        else{
            Node* temp  = head ;
            for(int i=  1 ; i <= idex  ; i++){
                temp =temp->next ;
            }
            cout<<temp->val<<endl;
        }
    }

    void reverse(){
        Node* temp = tail ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->prev ;

        }
        cout<<endl;
    }
    void removeZDublicate(){
        Node* temp = head ;
        while(temp != NULL && temp->next != NULL){
            if(temp->val == temp->next->val){
                Node* x = temp->next ;
                while(x != NULL &&  x->val == temp->val){
                    x = x->next;

                }
                temp->next = x;
                if(x != NULL){
                     x->prev = temp;
                }
                else{

                    tail = temp;
                }
               
                temp = x;
            }
            else{
                temp = temp->next;


            }
        }
    }

}; 
int main(){
    myDoublyLinkedList a;
    a.insertAthead(34);
    a.insertAthead(34);
    a.insertAthead(34);
    a.insertAtTail(120);
    a.insertAtTail(780);
    a.insertAtTail(780);
    a.insertAtTail(900);
    a.insertAtTail(900);
    a.insertAtTail(901);
    a.Display();
    a.removeZDublicate();
    a.Display();
    a.reverse();
    return 0;
}