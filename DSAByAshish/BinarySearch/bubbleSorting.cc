#include<iostream>
#include<vector>
using namespace std;
int main(){

// !time colexcity is o(n^2) worst case
// ! AND    best case time complexcity is o(n) an d this method is stable
// !number of total swap is n*(n-1)/2

    vector<int> vec = { 70  , 60  , 50 , 40  ,30  ,20 , 10};
    int Size = vec.size();

    for(int i = 0  ; i < Size-1 ; i++){
        int swaps = 0 ;
        for(int j = 0  ; j < Size-1-i ; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j] , vec[j +1]);
                swaps++;
            }
        }

        if(swaps ==0){
            break;
        }
    }
     cout<<"sorting vector is :"<<endl;
    for(int ele : vec){
        cout<<ele<<" ";
    }

    return 0;

}