#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec {10 , 20 , 30 , 40 , 50  ,60 };
    int size =  vec.size();
    for(int i= 0  ;  i< size-1 ;  i++){
        int swaps = 0;
        for(int  j = i+1  ; j < size-1 -i ; j++){
            if(vec[i] < vec[j]){
                swap(vec[i] , vec[j]);
                swaps++;
            }
        }

        if(swaps == 0){
            break;
        }
    }

    cout<<"decending order of vector is :"<<endl;
    for(int ele : vec ){
        cout<<ele<<" ";
    }

    return 0;
    
}