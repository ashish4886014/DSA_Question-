#include<iostream>
#include<vector>
using namespace std;

// !time complecity is worst case =  O(n^2)
// !an d best main time complecity  is = O(n);
// !space complexcity is  = O(1) and stable method;

int main(){
    vector<int> vec = {4 ,1 , 7, 3  , 9 , 2 ,0 , 8};
    int  size =  vec.size();
    for(int  i = 1 ;  i  < size  ; i++){
        int j =i ;
        while( j >= 1 && vec[j]  < vec[j-1]){
            swap(vec[j]  , vec[j-1]);
            j--;
        }
    }

    for(int ele : vec){
        cout<<ele<<" ";
    }
    return 0;
    
}