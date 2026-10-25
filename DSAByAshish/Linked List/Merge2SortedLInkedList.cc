#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    void print(Node* head){
        while(head != NULL){
            cout<<head->val<<" ";
            head = head->next;
        }
        cout<<endl;
    }
}; 
void mergeSortedLikedList(Node* headA , Node* headB){
    Node* i = headA;
    Node* j = headB ;
    Node* dummy  = new Node(-1);
    Node* k = dummy;

    while(i != NULL && j != NULL){
        if(i->val > j->val){
          k->next = j;
          j = j->next;         
        }
        else{
            k->next = i;
            i =   i->next; 
        }
         k = k->next ;
    }
    if(j != NULL){
        k->next = j;
        j = j->next;         
    }
    if(i != NULL){
           k->next = i;
           i =   i->next; 
    }
    dummy->next->print(dummy->next);
}
int main(){
    Node* a =  new Node(23);
    Node* b  = new Node(34);
    Node* c =  new Node(67);
    Node* d =  new Node(89);
    
    a->next = b;
    b->next = c;
    c->next = d;
    
    a->print(a);
 
    Node* e = new Node(25);
    Node* f = new  Node(56);
    Node* g = new  Node(77);
    Node* h = new  Node(95);

    e->next = f;
    f->next = g;
    g->next = h;
    e->print(e);
    mergeSortedLikedList(a , e);
    return  0;    
}