#include<iostream>
using namespace std;
void print(int n){
    if(n == 0){
        cout<<endl;
        return ;
    }
    else{
        cout<<n<<" ";
        print(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"enter integer a:";
    cin>> n;
    print(n);
    return 0;
}