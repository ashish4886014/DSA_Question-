#include<iostream>
#include<vector>
using namespace std;
int searchInsertPosition(vector<int>& vec ,int target){
    int size = vec.size();
    int st = 0 ;
    int end = size - 1;
    while(st <= end){
        int mid ;
        mid = st + (end - st)/2;
        if(vec[mid] >target){
            end = mid- 1;
        }
        else if(vec[mid] <target){
            st = mid + 1;
        }
        else{
            return st;
        }
    }

}
int main(){
vector<int> vec = {1 , 3 , 5, 6 , 7 ,9};
int target = 8;

cout<<"search insert position is :"<<searchInsertPosition(vec , target);
return 0;
}