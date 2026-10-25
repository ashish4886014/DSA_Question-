#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec { 1 , 0, 3 , 0, -1 , 4  ,0};
    int size = vec.size() ;
    for(int i = 0 ;  i < size -1 ; i++){
        for(int  j = i +1 ; j < size -1 - i  ; j++){
            if(vec[j] == 0){
                swap(vec[j] , vec[j+1]);
            }
        }

    }

    for(int ele : vec){
        cout<<ele<<" ";
    }

    return 0;

}