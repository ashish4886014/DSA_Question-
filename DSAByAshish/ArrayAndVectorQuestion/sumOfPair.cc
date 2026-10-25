#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> vec =  {3 , 6, 7 , 34 ,56 , 43 , 78 ,9 };
int size =  vec.size();
int target = 43;
vector<int> ans;
int i = 0 ;
int j = size-1 ; 
sort(vec.begin() , vec.end());
while( i  < j ){
    if(vec[i] + vec[j] > target){

    }
}
}