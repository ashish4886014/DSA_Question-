#include<iostream>
using namespace std;
class Node{
    public:
    int val ;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }


};

class MyQueue{
    private :
    Node* head ;
    Node* tail ;
    int length ;
    public :
    MyQueue(){
        head = tail = NULL;
        length = 0 ;
    }
    
};  
int main(){

}