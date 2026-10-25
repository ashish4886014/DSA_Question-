#include<iostream>
//!method - 1 time complexcity is = O(root-x)
int  squareRoot(int x){
    int st = 0;
    int end = x ;
    while(st <= end){
        int mid ;
        mid = st + (end - st)/2;
        if(mid > x/mid){
           end = mid - 1;
        }
        else if(mid < x/mid){
            st =  mid +1;
        }
        else{
           return mid;
        }

    }
    return - 1;
}
using namespace std;
int main (){
   int x = 10;
   cout<<"square root is :"<<squareRoot(x);
   return 0;
    
}