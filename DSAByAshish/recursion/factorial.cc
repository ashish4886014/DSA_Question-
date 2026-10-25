#include<iostream>
using namespace std ;
int fact(int n){
    int ans;
    if(n == 1){
        return 1;
    }
    else{
        ans = n *fact(n-1);

    }
}
int main(){
    int n;
    cout<<"enter a integer number :";
    cin>>n;
    cout<<"factorial of number :"<<fact(n)<<endl;
    return 0;
}