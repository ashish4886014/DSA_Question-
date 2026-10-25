#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSort(vector<int>& vec1 , vector<int>& vec2 ){
    int i  =0 ;
    int j= 0 ;
    vector<int> ans(vec1.size()+vec2.size() ,0);
    int k =0;
    while(i < vec1.size() && j < vec2.size()){
        if(vec1[i] < vec2[j]){
            ans[k++] = vec1[i++];
        }
        else if(vec1[i] > vec2[j]){
            ans[k++] = vec2[j++];
        }
    }
    while(i < vec1.size()){
          ans[k++] = vec1[i++];

    }
    while( j < vec2.size()){
         ans[k++] = vec2[j++];

    }
    return ans;
}
int main(){
    vector<int> vec1 = {10 ,10  , 20  ,40 , 70 , 90 , 100};
    vector<int> vec2 =  { 30 , 50  , 60  , 80};
    vector<int> ans ;
    ans = mergeSort(vec1 , vec2);

    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}




