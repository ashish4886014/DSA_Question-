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
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(Node* head){
        Node* temp  = head;
        int count = 0;
        while(temp !=  NULL){
            count++;
            temp = temp->next;
        }
        return count ;
    }

    int kthValue(Node* head , int k){
          Node* temp = head;
        int length = head->size(head);
        for(int i = 1 ; i <=length - k ; i++){
            temp = temp->next;

        }
        return temp->val;
    }
};
int main(){
    Node* a = new Node(45);
    Node* b = new Node(34);
    Node* c  = new Node(23);
    Node* d = new Node(56);
    Node* e = new Node(67);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    a->display(a);
    cout<<a->kthValue(a , 2);
    return  0;


}