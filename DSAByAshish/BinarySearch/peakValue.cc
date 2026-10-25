#include<iostream>
#include<vector>
using namespace std;
int peakValue(vector<int>& vec ){
    int size  = vec.size() ;
    int st = 1 ;
    int end =size -2 ;
    while( st <= end ){
        int mid ;
        mid  = st + (end - st);
        if(vec[mid- 1] <= vec[mid] && vec[mid] < vec[mid+1]){
            st = mid -1;
                  
        }
        else if(vec[mid +1] <= vec[mid] && vec[mid- 1] > vec[mid]){
            end  = mid -1;
        }
        else{
            return mid;
        }
    }

}
int main(){
    vector<int> vec ={1 , 2 , 3, 4, 6 ,8 , 5, 4 , 3 , 1};
    int ans = peakValue(vec );
    cout<<ans<<endl;
    return 0;
    
}