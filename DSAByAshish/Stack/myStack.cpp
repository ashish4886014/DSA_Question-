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
};

class myStack{
    private :
    int length ;
    Node* head ;
    Node* tail ;
    public :
    myStack(){
        head = tail = NULL;
        length  = 0;
    }
    void pop(){
        if(length ==0 ){
            cout<<"stack is empty";
            return ;

        }
        Node* toBeDelete = head ;
        head  = head->next ;
        delete toBeDelete ;
        length--;
    }
    void push(int val){
        Node* n = new Node(val);
        if(length == 0){
            head = tail  = n;

        }
        else{

        }
    }
};
int main(){
    

}