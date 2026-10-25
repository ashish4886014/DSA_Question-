#include<iostream>
#include<vector>
using namespace std;

// !time complexcity is O(logN)
int binarySearch(vector<int>& vec , int target){
     int st = 0 ;
    int end = vec.size() - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(vec[mid] > target ){
            end = mid-1;
        }
        else if(vec[mid] <target){
            st = mid +1;
        }
        else{
            return mid;
            
        }
    }
    return -1;
}
int main() {
    vector<int> vec = {1 , 34 , 56 ,78  , 89  ,90 , 91 , 95};
int target = 89;
cout<<"search element index is :"<<binarySearch(vec , target);
return 0;
}