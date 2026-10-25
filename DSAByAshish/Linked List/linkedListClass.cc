#include<iostream>
using namespace std;
class Node{
    public :
    int val;
    Node* next ;
    Node(int val){
        this->val = val ;
        this->next = NULL;
    }
    Node(){

    }
};
class MyLinkedList{
    private :
       Node* head ;
       Node* tail;
       int length ;
    public :
   
    MyLinkedList(){
       head = tail = NULL;
        length = 0;
    }
   
    void display(){
        Node* temp = head ;
        while(temp !=  NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
       if(length == 0){
        tail = head  = n;
        
       }
       else{
        tail->next = n;
        tail = n;

       }
       length++;
    
    }
    void insertAtHead(int val){
        Node* n =  new Node(val);
        if(length == 0){
            tail = head = n;
           
        }
        else{
             n->next = head ;
             head =  n;
        }
        length++ ;
       
    }
    void DeleteAtHead(){
        head = head->next;
        length--;

    }
    void size(){
        cout<<length<<endl;
    }
    void insert(int idex , int val){
        Node* n = new Node(val);
        Node* temp = head ;
        if(idex == 0){
            insertAtHead(val);
            return ;
        }
        if(idex  < 0 or idex > length){
            cout<<"invalied index";
            return ;
        }
        for(int i= 1 ; i <= idex-1 ; i++){
            temp = temp->next;

        }
        n->next = temp->next;
        temp->next = n;
        length++;
       
    }
    void get(int idex){
        if(idex == 0){
            cout<<head->val<<endl;

        }
        if(idex < 0  or idex > length){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int i= 1 ; i <= idex ; i++){
            temp = temp->next;

        }
        cout<<temp->val<<endl;
    }
    void Delete(int idex){
        if(idex ==0){
            DeleteAtHead();

        }
        if(idex < 0 or idex > length){
            cout<<"invalied index";
            return ;
        }
        Node* temp = head ;
        for(int i =1 ; i <= idex -1 ; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        length--;
         if(idex = length - 1) {
             tail = temp;
        }
   
    }
    

};
int main(){
    MyLinkedList list ;
    list.insertAtTail(45);
    list.insertAtTail(49);
    list.insertAtTail(495);
    list.display();
    list.size();
    list.insertAtHead(56);
    list.display();
    list.size();
    list.DeleteAtHead();
    list.display();
    list.size();
    list.insert(1 , 23);
    list.display();
    list.size();
    list.get(1);
    list.Delete(1);
    list.display();
    list.size();
    return 0;

}


// #include<iostream>
// using namespace std;
// class Node{
//     public: 
//      int val;
//     Node* next;
//     Node(int val ){
//         this->val  = val;
//         this->next = NULL;
//     }
//     Node(){
//     }
   
// };

// class MyLinkedList{
//     private:
//      Node* head ;
//      Node* tail;
//      int length;

//     public:
//        MyLinkedList(){
//         head = tail = NULL;
//         length = 0;       
//     }
//      void display(){
//        Node* temp =  head;
//        while(temp != NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//        }
//        cout<<endl;
//     }
//     void insertTail(int val){
//         Node* n = new Node(val);
//        if(length == 0){
//         head = tail = n;
//        }
//        else{
//          tail->next = n;
//         tail = n;
//        }
//        length++;
//     }
//     void insertHead(int val){
//          Node* n = new Node(val);
//         if(length == 0){
//             head = tail = n;
//         }
//         else{
//             n->next  = head;
//             head  = n;
//         }
//         length++;
//     }
//     void removeHead(){
//         if(length == 0){
//             cout<<"List is  empty";
//             return ;
//         }
//         else{
//           head = head->next;
//           length--;
//         }  
//     }
//     int size(){
//         return length;
//     }
//     void insert(int idex , int val){
//         Node* temp = head;
//         Node* n = new Node(val);
//         if(idex == 0){
//             insertHead(val);
//             return ;
//         }
//         if(idex < 0 or idex > length){
//             cout<<"invalied index";
//         }
//         for(int i =1 ; i <= idex -1  ; i++){
//             temp = temp->next;
//         }
//         n->next = temp->next;
//         temp->next = n;
//         length++;

//     }

//     int get(int idex){
//         Node* temp = head;
//         if( idex < 0 or idex >= length){
//             cout<<"not valied index";
//             return -1;
//         }
//         for(int i = 1 ; i <= idex -1 ; i++){
//             temp = temp->next;
//         }
//         return temp->val;
//     }
//     void remove(int idex ){
//         if( idex < 0 or idex >= length){
//             cout<<"invalied index";
//             return ;
//         }
//         if(idex == 0){

//             removeHead();
//             return;
//         }
//         Node* temp = head ;

//         for(int i = 1 ; i <= idex -1 ; i++){
//             temp = temp->next;
//     }
//     Node* toBeDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toBeDelete;
//     if(idex = length - 1) {
//         tail = temp;
//     }
// }

// };
// int main(){
//     MyLinkedList list ;
//     list.insertTail(34);
//     list.insertTail(34);
//     list.insertTail(34);
//     list.insertTail(34);
//     list.insertHead(45);
//     list.insertHead(45);
//     list.removeHead();
//     list.insertHead(45);
//     list.insertHead(78);
//     list.removeHead();
//     list.insert(2 , 67);
//     list.display();
//     list.remove(2);
//     list.display();
//     // cout<<list.length;
//     cout<<list.size();
//     return  0; 
// }

// // ! limitation of linked list 

// // ? double spacce for each element
// // ? get(idex) is o(n) time
// // ? you can not traverse  backward