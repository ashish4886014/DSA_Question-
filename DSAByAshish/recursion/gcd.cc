#include<iostream>
using namespace std;

// !first method by loop

// int gcd(int x , int y){
//  int ans = -1;
//  for(int i = 1; i  <= min(x, y) ; i++){
//     if(x %i == 0 && y % i == 0){
//         ans = max(ans , i);
//     }
//  }  
//  return ans; 
// }

// ! second method by recursion

int gcd(int x , int y){
    if(x == 0){
        return y;
    }
    else{
        gcd(y % x , x);
    }
    return -1;
}


int main(){
    int x , y;
    cout<<"enter number :";
    cin>>x>>y;
    cout<<"gcd of number :"<<gcd(x, y)<<endl;
    return 0;
}