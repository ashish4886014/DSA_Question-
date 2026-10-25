#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    void display(Node* head){
        while(head != NULL){
            cout<<head->val<<" ";
         head = head->next;
        }
        cout<<endl;
    }
    // ! DElete funtion 
    void Delete(Node*  slow){
        slow->next = slow->next->next;
    }

    // ! method -1 slow fast method
    void middleDelete(Node* head){
        Node* slow = head ;
        Node* fast = head ;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        int temp  =   slow->next->val;
        slow->next->val = slow->val;
        slow->val = temp;
        Delete(slow);        
    }
};
int main(){
    Node* a =  new Node(23);
    Node* b =  new Node(45);
    Node* c =  new Node(56);
    Node* d =  new Node(89);
    // Node* e =  new Node(890);
    // Node* f =  new Node(567);
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = e;
    // e->next = f;
    a->display(a);
    a->middleDelete(a);
    a->display (a);
    return 0;
}