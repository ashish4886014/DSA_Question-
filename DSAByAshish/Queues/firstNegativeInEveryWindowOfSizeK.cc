#include <iostream>
#include<queue>
using  namespace std;
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

}