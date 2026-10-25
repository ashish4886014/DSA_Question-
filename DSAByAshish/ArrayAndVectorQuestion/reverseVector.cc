#include<iostream>
#include<vector>
using namespace std;

//!reverse funtion 

vector<int> reverseVector(vector<int>& vec){
     int st = 0 , end = vec.size()-1;

 
     while(st < end ){
        swap(vec[st++] , vec[end--]);
    }
  
}

int main(){
    vector<int> vec {70,80 , 60 , 50, 40 , 30 ,20 , 10};
     reverseVector(vec);

     for(int valu :vec){
        cout<<valu<<" ";
     }
   
    return  0;
  
}