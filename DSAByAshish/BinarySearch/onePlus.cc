#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {9 ,9  ,9};
    int currys= 1;
    reverse(vec.begin() , vec.end());
   for(int i =0  ; i < vec.size() ; i++){
    int sum = 0 ;
      sum  = vec[i] + currys ;
      if(sum >= 10){
        vec[i] = 0;
        currys = 1;
      }
      else{
        vec[i]  = sum ;
        currys = 0;

      }


   }
   if(currys == 1){
    vec.push_back(1);
   
   }
    reverse(vec.begin() , vec.end());

    for(int ele : vec){
        cout<<ele<<" ";
    }
    return 0;
}