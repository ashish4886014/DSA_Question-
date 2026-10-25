#include<iostream>
#include<vector>
using namespace std;
int rotateSortedArray(vector<int>& vec , int target){
    int size = vec.size();
    int st = 0  ; 
    int  end  = size - 1;
    while ( st <= end){
        int mid ;
        mid = st  + (end - st )/2;
        if(vec[mid] == target){
            return  mid;
        }
       else  if(vec[mid] > vec[st]){
            if(target < vec[mid] && target >= vec[st]){
                 end = mid - 1;
            }
            else{
                st  = mid + 1;
            }

         }
         else{           //  vec[end] > vec[mid]

            if (target > vec[mid] &&  target <= vec[end]){
                  st = mid + 1;
            }
            else{
                end = mid - 1;
            }

         }
    }

    return -1 ;
}
int main(){
    vector<int> vec = {8 , 9 , 10 , 1 , 2 , 3 , 4 , 5 , 6 ,7};
    int target  = 10 ;
    cout<<"indexes is  :"<<rotateSortedArray(vec , target);
    return 0 ;

}