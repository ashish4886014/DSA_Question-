#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& vec , int target){
     int size =  vec.size();
    int st = 0;
    int end = size - 1 ;
    while( st <= end){
        int mid;
        mid  = st + (end - st )/2 ;
        if(vec[mid] > target){
            st = mid +1;
        }
        else if (vec[mid] < target){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main (){
    vector<int> vec = {10 , 9 , 8 , 5 , 3 ,2 , 1};
   int target = 2;
   cout<<"target element index is :"<<binarySearch(vec , target);
   return 0;
}