#include<iostream>
using namespace std;
void print(int n){
    if(n ==0){
        cout<<endl;
        return ;
    }
    else{

        print(n-1);
         cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"enter a integer number :";
    cin>>n;
    print(n);
    return 0;
}