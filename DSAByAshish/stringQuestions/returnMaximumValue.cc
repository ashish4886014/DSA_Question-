#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
string biggerNumber(string s1 , string s2 ){
    int i = 0 ;
    while(s1[i] == '0') {
        i++;
    }
   int  s1RealLength = s1.length() - i;
   int j =0  ;
   while(s2[j] == '0'){
    j++;
   }
   int s2RealLength =  s2.length() - j;
   if(s1RealLength > s2RealLength) {
    return s1;
   }
   if(s2RealLength > s1RealLength){
    return s2;
   }
   while(i < s1.length() && s1[i] == s2[j]){
    i++ ;
    j++;
   }
   if(i == s1.length()){
    return s1;
   }
   if(s1[i] > s2[j]){
    return s1;
   }
   else{
    return s2;
   }

}
int main(){
    vector<string> vec = {"0123" ,"04774474784023" , "345445840953495890335344444334534456" ,"00182" };
    string max = vec[0];

    // !time complexcity  is = O(m*n)
    // for(string s : vec){
    //     if(stoi(s) > stoi(max)){
    //         max = s;
    //     }
    // }

    //! second method is without stoi and stoil

    for(int  i= 0  ; i < vec.size() ; i++){
       max =  biggerNumber(vec[i] , max);
    }
    cout<<max<<endl;
    return 0;

}