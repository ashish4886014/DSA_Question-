#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st ;
    int size1 = q.size();
    while(size1--){
        st.push(q.front());
        q.pop();
    }
    int size2 = st.size();
    while(size2--){
        q.push(st.top());
        st.pop();
    }

}
void display(queue<int>& q){
    int size = q.size();
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
    q.push(10);
    q.push(34);
    q.push(56);
    q.push(34);
    q.push(12);
    display(q);
    reverseQueue(q);
    display(q);
    return 0;

}