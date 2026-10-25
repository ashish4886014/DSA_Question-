#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>& vec , int target){
    int st = 0;
    int ans = -1;
    int size = vec .size();
    int end = size - 1;
    while(st <= end ){
        int mid ;
        mid = st + (end - st)/2;
        if (vec[mid] > target ){
        end = mid - 1;

        }
        else if(vec[mid] < target){
            st = mid +1;
            
        }
        else{
            ans = mid ;
            end = mid-1;

        }
    }
    return ans;
}
int main(){
        vector<int> vec = {-7 , - 5,-2 ,-3, -1 , 0, 0 , 0 ,0 , 0, 67 ,89 ,90 , 91 ,95 };
        int target = 0 ;
        cout<<"first occurence is :"<<firstOccurence(vec , target);
        return 0;
}