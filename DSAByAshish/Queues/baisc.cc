#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// class myQueue{
//     private:
//      int length ;
//     int front ;
//     int back;
//     public:
   
//     myQueue(){
//         length = 0;
//         front = back;
//     }

//     void push(int val){
//         if(length ==0){
//             front = back = val;

//         }
//         else{
//             back = val;
//         }
//         length++;

//     }
//     void pop(){
//         length--;
//     }
//     void display(myQueue a){
//         int size  = length ;
//         while(size--){
//             cout<<a.front;
//             a.push(a.front);
//             a.pop();
//         }
//     }
// };
void pushAtIndex(int idex , int ele , queue<int>& q){
    int  n = q.size();
    for(int i = 0  ; i < idex ; i++){
        q.push(q.front());
        q.pop();
    }
    q.push(ele);
    for(int i = 0 ; i < n - idex ; i++){
        q.push(q.front());
        q.pop();
    }
}
void popAtIndex(int index , queue<int>& q){
    int n = q.size();
    for(int i = 0 ;  i <index  ; i++){
        q.push(q.front());
        q.pop();
    }
    q.pop();
    for(int i = 0  ; i < n - index -1 ; i++){
        q.push(q.front());
        q.pop();
    }
}
void getAtIndex(int index , queue<int>& q){
    int n = q.size();
    for(int i =  0  ;i < index  ; i++){
        q.push(q.front());
        q.pop();
    }
    cout<<q.front()<<" "<<endl;
    for(int i = 0  ; i < n -index  ; i++){
        q.push(q.front());
        q.pop();
    }
}
void reverseQueue(queue<int>& q){
    stack<int> st;
    int size = q.size();
    while(size--){
        st.push(q.front());
        q.pop();
    }
    while(st.size() >0){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int>& a){
    int size = a.size();
    while(size--){
        cout<<a.front()<<" ";
        a.push(a.front());
        a.pop();
    }
    cout<<endl;

}
int main(){
    // a.push(34);
    // a.push(23);
    // a.display(a);
     queue<int> q;
     q.push(78);
     q.push(8);
     q.push(98);
     q.push(58);
     q.push(748);
     q.push(58);
    //  pushAtIndex(2, 45, q);
    display(q);
    getAtIndex(2, q);
    popAtIndex(2, q);
    // cout<<q.size()<<endl;
     display(q);
    //  cout<<q.size()<<endl;
    //  cout<<q.front()<<endl;
    //  cout<<q.back()<<endl;
    reverseQueue(q);
     display(q);
    return 0;
}