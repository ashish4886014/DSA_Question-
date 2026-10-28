#include<iostream>
#include<deque>
using namespace std;
void display(deque<int>& q){
    int n= q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push_back(q.front());
        q.pop_front();
    }
    cout<<endl;
}
void pushAtIndex(){

}
void popAtIndex(){

}
void getAtIndex(){

}
int main(){
    deque<int> q;
    q.push_back(23);
    q.push_back(45);
    q.push_front(24);
    display(q);
    return 0;
}
