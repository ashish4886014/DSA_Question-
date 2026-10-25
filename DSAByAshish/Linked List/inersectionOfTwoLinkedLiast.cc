#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next;
    Node(int val){
        this->val = val ;
        this->next = NULL;
    }
    void print(Node* head ){
        while(head != NULL){
            cout<<head->next <<" ";
        }
        cout<<endl;
    }

};

    int size(Node* head){
        int count = 0 ;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }

int intersection(Node* head1 , Node* head2){
    int length1 = size(head1);
    int length2 = size(head2);
    if(length1 > length2){
        for(int  i =1  ; i <= length1 - length2 ; i++){
            head1 = head1->next ;
        }
    }
    else{
        for(int i= 1 ; i <= length2 - length1 ; i++){
            head2 = head2->next;
        }
    }
    while(head1 != head2){
        head1 = head1->next ;
        head2 = head2->next ;
    }
    return head1->val;

}
int main(){
    Node* a = new Node(45);
    Node* b = new Node(12);
    Node* c =  new Node(13);
    Node* d = new Node(56);
    
    a->next = b;
    b->next = c;
    c->next = d;
  
    Node* e = new Node(34);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(13);
    Node* i = new Node(23);

    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    d->next = g;

    cout<<intersection(a , f);

    return 0;
}