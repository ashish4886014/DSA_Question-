#include<iostream>
#include<vector>
using namespace std;
int singleElement(vector<int>& vec){
    int size  = vec.size();
    int  st =0  , end = size -1;
    if(size ==1){
        return vec[size];
    }
    
    while(st <= end){
        int mid ;
        mid = st + (end  - st);
        if(vec[mid] != vec[mid-1] && vec[mid] != vec[mid+1]){
            return vec[mid];
        }
        int firstOccurence = mid;
        int secondOccurence = mid;

        if(vec[mid] == vec[mid - 1]){
                firstOccurence = mid-1;
        }
        else{
            secondOccurence = mid + 1;
        }
       
        if((firstOccurence - st) % 2== 1 ){
            end  = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
    
}
int main(){
    vector<int> vec = {0 ,0 ,1, 1 , 2,2 , 3 ,3  , 4 ,4 , 5 ,5, 6,6  , 7,7 , 8,8 , 9,9 , 10, 10 , 12 , 13 , 13};
    int size  = vec.size();
    cout<<"single element is :"<<singleElement(vec);
    return 0;
}