//! Delete in a singly Linked Lis
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*  next ;
    Node(int val){
        this->val = val;
        this->next = NULL ;

    }
    void display(Node* head){
        if(head == NULL){
            return ;
            
        }
        else{
            cout<<head->val<<" ";
            display(head->next);
        }
    }
    void DeleteNode(Node* node){
        node->val = node->next->val;
        node->next = node->next->next;

    }
};
int main(){
    Node* a = new Node(34);
    Node* b = new Node(34);
    Node* c = new Node(34);
    Node* d = new Node(37);
    Node* e = new Node(39);
    Node* f = new Node(34);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    c->DeleteNode(d);

    a->display(a);
    return 0;


}