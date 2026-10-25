#include<iostream>
#include<vector>
using namespace std;
int numberOfCount(vector<int>& vec){
    int pos =0 ;
    int neg =0 ;
    int maxCount = 0;
    int size = vec.size();
    int st = 0 , end = size -1;
    while(st <= end){
        int mid ;
        mid = st + (end - st )/2;
        if(vec[mid] >0){
            pos++;
            end = mid -1;
        }
        else{       
            st =mid+1;
        }
    }

    st = 0 ;
    end = size - 1;
    while ( st < end ){
        int mid ;
        mid = st + (end - st )/2;
        if(vec[mid] < 0){
            neg++;
            st = mid +1;
        }
        else{
            end  = mid -1;

        }
    }
    maxCount = max(neg , pos);
        
    return maxCount ;

}
int main(){
    vector<int> vec = {-10 , -9  , -8 , -5 ,1 , 4 , 6 , 8 ,10};
    int size  = vec.size();
    int count = numberOfCount(vec);
    cout<<"count "<<count;
}