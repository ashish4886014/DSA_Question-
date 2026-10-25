#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>& vec , int target){
    int size = vec.size();
    int st = 0;
    int end  = size -1;
    int lowerb = -1;
    while(st < end ){
        int mid ;
        mid  = st + (end - st)/2;
        if(vec[mid] < target ){
            st =  mid +1;
        }
        else if(vec[mid] >= target){
            lowerb = mid ;
            end = mid -1;
        }
    }
    return lowerb;
}
int main(){
     vector<int> vec = {1 , 3, 3,  3 , 9, 10};
     int target = 3;
     cout<<"lower bound is :"<<lowerBound(vec , target)<<endl;
     for(int ele : vec){
        cout<<ele<<" ";
     }

     return 0;

}