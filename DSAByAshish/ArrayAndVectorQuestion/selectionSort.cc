#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//! time complexcity is o(n^2)
//! this method do not stable
// ! number of swaps is n-1
int main(){
    vector<int> vec = { 70  , 60  , 50 , 40  ,30  ,20 , 10};
    int size = vec.size();

    for(int i= 0  ; i < size-1 ; i++ ){
        int min =  INT_MAX;
        int index = -1;
        for(int  j= i  ;  j < size ; j++){
            if(vec[j] < min){
                min = vec[j] ;
                index = j;
            }
        }
        swap( vec[index] , vec[i]);
    }
    cout<<"sorting vector is :"<<endl;
    for(int ele : vec){
        cout<<ele<<" ";
    }

}