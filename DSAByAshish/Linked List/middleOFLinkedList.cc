#include<iostream>
using namespace std;
class Node{
    public:
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
    // ! length count function 
    // int  size(Node* head){
    //     int count = 0;
    //     Node* temp = head ;
    //     while(temp != NULL){
    //         count++ ;
    //         temp = temp->next;
    //     }
    //     return count ;
    // }
    //   ! method -1 normal 
//     int middle(Node* head){
//     Node* temp = head ;
//     int length = head->size(head);
//     for(int i= 1 ; i <= length /2 ; i++){
//         temp = temp->next;
//     }
//     return temp->val;
// }
    //   ! method -2 slow fast
    int middle(Node* head){
        Node* slow  = head ;
        Node* fast =  head ;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->val;
    }
};

int main(){
    Node* a = new Node(23);
    Node* b = new Node(24);
    Node* h = new Node(35);
    Node* c = new Node(67);
    Node* g = new Node(345);
    Node* i = new Node(43);
    Node* j = new Node(45); 
    a->next = b;
    b->next = c;
    c->next = g;
    g->next = h;
    h->next = i;
    i->next = j;

    a->display(a);
    // cout<<a->size(a)<<endl;
    cout<<a->middle(a)<<endl;
    return 0;

}