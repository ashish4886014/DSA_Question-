#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{2 , 3 ,45}, { 2 , 3 ,4 , 5} , {6 , 7 , 2}};
    
    int sum = 0;
    for(int i= 0  ; i < vec.size() ; i++){
        for(int  j = 0 ; j < vec[i].size() ; j++){
            sum += vec[i][j];
        }
    }
  
    cout<<sum<<" ";
    return 0;

}