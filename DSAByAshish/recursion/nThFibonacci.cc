#include<iostream>
using namespace std;
int fibbo(int n){
    int  ans ;
    if (n == 0 || n ==1){
        return n;
    }
    else{
        ans = fibbo(n-1) + fibbo(n-2);
    }
}
int main (){
    int n;
    cout<<"find  fibonacci number :";
    cin>>n;
   cout<< fibbo(n)<<" "<<endl;
   return 0;
    
}