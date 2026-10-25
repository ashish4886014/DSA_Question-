#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseFunction(queue<int>& q ,int k){
    stack<int> st;
    int n = k;
  
    while(k--){
        st.push(q.front());
        q.pop();       
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    int size = q.size();
    for(int i= 0  ; i < size - n ; i++){
        q.push(q.front());
        q.pop();
    }
    
    

}

void display(queue<int>& q){
     int size  = q.size();
     while(size--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
     }
     cout<<endl;
        
    }
       
int main(){
    queue<int> q;
    q.push(23);
    q.push(54);
    q.push(78);
    q.push(56);
    q.push(45);
    display(q);
    reverseFunction(q , 3);
    display(q);


    
}