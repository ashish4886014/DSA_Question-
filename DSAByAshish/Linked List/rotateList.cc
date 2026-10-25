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
    Node(){

    }
};

class myNodeList{
    private:
    Node* head ;
    Node* tail;
    int length  ;
    public :
    myNodeList(){
        head =  tail = NULL;
        length  = 0;
    }

    void insertAtHead(int val){
        Node* n = new  Node(val);
        if(length  == 0 ){
            head  = tail = n; 
        }
        else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void insertAtTail(int val){
        Node* n =new Node(val);
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
        if(idex == 0){
            insertAtHead(val);
            return ;
        }
        if(idex < 0 or idex >= length ){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head;
        Node* n = new Node(val);
        for(int i= 1 ; i <= idex -1 ; i++){
            temp = temp->next ;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
        
    }

    void get(int idex){
        if(idex == 0){
            cout<<head->val<<endl;
            return ;
        }
        if(idex < 0 or idex >= length){
            cout<<"invalied index";
        }
        Node* temp = head ;
        for(int  i= 1 ; i <= idex - 1 ; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }

    void DeleteHead(){
        head = head->next;
        length--;

    }
    void print(){
        Node* temp = head  ;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    Node* rotateList(int k){
        if(head == NULL or head->next == NULL){
            return head;
        }
        Node* a  = NULL;
        Node* b = NULL;
        Node* c = NULL;
        Node* temp = head;
          k = k % length;
        if(k == 0) return head;

        for(int i= 1 ; i <= length ; i++){
            if(i == length-k +1) {
                b = temp;
            }
            if(i == length) {
                c  = temp;
            }
            if(i == length - k){
                a = temp;
            }
            temp = temp->next;

        }
        a->next = NULL;
        c->next = head;
        return  head =b;

        
    }
};
int main(){
    myNodeList a;
    a.insertAtHead(12);
    a.insertAtHead(56);
    a.insertAtHead(67);
    a.insertAtHead(23);
    a.insertAtHead(90);
    a.print();
    a.rotateList(3);
    a.print();
    


    return 0;

}