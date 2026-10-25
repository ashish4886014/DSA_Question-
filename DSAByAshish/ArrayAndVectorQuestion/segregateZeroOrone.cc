#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {0 , 1 , 0 , 0 , 1 , 0 , 1  , 1};
    // int zeroCount = 0 ;
    // int oneCount = 0;
    // for(int valu : vec ){
    //     if(valu == 0){
    //         zeroCount++;
    //     }
    //     else{
    //         oneCount++;
    //     }
    // }

    // for(int i = 0 ; i < zeroCount ; i++){
    //     vec[i] = 0;
    // }
    // for(int i = zeroCount ; zeroCount < vec.size() ;  zeroCount++){
    //     vec[zeroCount] = 1;
    // }

    //mthod -2 segregate of zero one

    int st = 0 , end = vec.size()-1 ;
    while(st < end){
        if(vec[st] == 0){
            st++ ;
        }
        if(vec[end] == 1){
            end-- ;
        }
        if(vec[st] == 1 && vec[end] == 0){
            swap(vec[st++] , vec[end--]);
        }
    }

    for(int valu : vec){
        cout<<valu<<" ";
    }
   return 0;
    
}