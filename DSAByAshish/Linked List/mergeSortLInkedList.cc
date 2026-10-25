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
    Node(){

    }

      void display(Node* head){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

};
class myLinkedList{
    private:
    Node* head ;
    Node* tail;
    int length ;

    public:
   
    myLinkedList(){
        head = tail = NULL;
        length = 0;
    }

    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length == 0){
            head  = tail = n;
        }
        else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length ==0 ){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insert(int idex , int val){
        if(idex ==0 ){
            insertAtHead(val);
            return ;
        }
        if(idex < 0  or idex >= length){
            cout<<"invalied index";
            return ;
        }
        Node* n = new Node(val);
        Node* temp = head ;
        for(int i = 1 ; i <= idex - 1 ; i++){
            temp = temp->next ;
        }
        n->next = temp->next ;
        temp->next = n;
        length++;
    }
    void DeleteAtHead(){
        head = head->next;
        length--;
    }
    void DeleteAt(int idex){
        if(idex ==0 ){
            DeleteAtHead();
            return;
        }
        if(idex < 0  or idex >= length ){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int  i = 1 ; i <= idex - 1 ;   i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        length--;
    }
    void get(int idex ){
        if(idex == 0 ){
            cout<<head->val<<endl;
        }
        if(idex < 0  or idex >=  length){
            cout<<"invalied index ";
            return ;
        }
        Node* temp =  head ;
        for(int i = 1  ; i <= idex -1 ; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }
    void display(){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }



};

    Node* mergeSortList(Node* head1 , Node* head2){
        Node* dummy  = new Node(-1);
        Node* k = dummy ;
        Node* i =  head1 ;
        Node* j = head2 ;
        while(i != NULL && j != NULL){
            if(i->val > j->val){
                k->next = j;
                j = j->next ;
            }
            else{
                k->next = i;
                i = i->next;
            }
            k =  k->next ;

        }
        if(i != NULL){
            k->next = i;
        }
        if( j != NULL){
            k->next  = j;
        }

        return dummy->next;
    }

   Node*  mergeSort(Node* head){
    if(head == NULL or head->next == NULL){
        return head ;
    }    
    Node* slow  = head ;
    Node* fast = head ;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next ;
        fast = fast->next->next;
    }
    Node* head2 = slow->next;
    slow->next  = NULL;
    Node* temp = head;
    
    head2 = mergeSort(head2);
    temp  = mergeSort(temp);

   return mergeSortList(temp , head2);
}


int main(){
    // myLinkedList a;
    // a.insertAtHead(78);
    // a.insertAtHead(88);
    // a.insertAtHead(6);
    // a.insertAtHead(487);
    // a.insertAtHead(380);
    // a.insertAtHead(34);
    // a.display();
    Node* a = new Node(34);
    Node* b = new Node(67);
    Node* c = new Node(23);
    Node* d = new Node(12);
    Node* e = new Node(11);
    Node* g = new Node(90);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = g;
    
    a->display(a);
    Node* f =  mergeSort(a);
    f->display(f);
    return 0;
    

}