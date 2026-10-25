#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
    Node(){

    }
};

void printRec(Node* head){
    if(head == NULL){
        return ;
    }
    else{
        cout<<head->val<<" ";
        printRec(head->next);
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp  =  temp->next;
    }
}
void printRecReverse(Node* head){
    if(head ==NULL){
        return ;
    }
    else{
        printRecReverse(head->next);
        cout<<head->val<<" ";
    }

}
int main() {
    Node* a = new Node(6);
    Node* b = new Node(9);
    Node* n = new Node(2);
    Node* x = new Node(1);
    
    a->next = b;
    b->next = n;
    n->next = x;
    print(a);
    cout<<endl;
    printRec(a);
    cout<<endl;
    printRecReverse(a);

    // cout<<(a->next)->val;
    // cout<<(a->next)->next->val;
    // cout<<a->val;

    // cout<<(*a).val;
    // cout<<a->val;

return 0;

}