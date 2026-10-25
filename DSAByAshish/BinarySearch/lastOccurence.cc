#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int>& vec , int target){
        int size = vec.size();
        int st =0  , end = size - 1 ;
        int ans = -1 ;
        while( st <= end){
                int mid ;
                mid = st  + (end - st)/2;
                if( vec[mid] > target){
                        end = mid-1;
                }
                else if(vec[mid] < target){
                        st = mid +1;
                }
                else{
                        ans = mid;
                        st = mid +1;

                }
        }
        return ans;
    
}
int main(){
       vector<int> vec = {-7 , - 5,-2 ,-3, -1 , 0, 0 , 0 ,0 , 0, 67 ,89 ,90 , 91 ,95 };
        int target = 0 ;
        cout<<"last occurence :"<<lastOccurence(vec , target);
        return 0;
     

}