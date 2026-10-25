#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
    void display(Node* head ){
        Node* temp = head ;
        while(true){
            cout<<temp->val<<" ";
            temp = temp->next ;
            if(temp == head ){
                break;
            }
        }
        // cout<<temp->val;

    }

};

int main(){
    Node* a = new Node(23);
    Node* b = new Node(34);
    Node* c = new Node(234);
    Node* d = new Node(78);
    Node* e = new Node(89);
    
    a->next = b; 
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = a;
    a->display(a);
    return 0;
}