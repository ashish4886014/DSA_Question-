#include<iostream>
#include<vector>
using namespace std ;
// !sorting array ke liye
// !method one brute force and time colplexcity is = O(n^2)
// int missingArray(vector<int>& vec , int size){
//       int a = 1 ;
//      for(int i = 0  ; i < size ; i++){
//         if(vec[i] != a){
//                 return vec[i]-1;
//         }
//         else{
//             a++;
//         }
//      }
//      return -1;
// }

// !second method time complexcity is = O(n^2)
// int missingArray(vector<int>& vec , int size){
//     for(int i= 0 ; i < size ; i++){
//         bool flag = false ;
//         for(int ele : vec){
//             if(ele == i){
//                 flag = true ;
//                 break;
//             }
//         }
//         if(flag == false ){
//             return i;
//         }
//     }
//     return -1;
// }

// !method thired time complexcity is = O(n)
// int missingArray(vector<int>& vec , int size){
//     vector<int> copy(size , false);
//     for(int i =0 ; i < size ; i++){
//         copy[vec[i]] = true;
//     }
//     for(int i = 0 ; i < size ; i++){
//         if(copy[i] == false){
//             return i;
//         }
//     }
//     return -1;
// }

// ! method four 

        int  missingArray(vector<int>& vec , int size){
            int totalSum  = size*(size+1)/2;
            int sum =0;
            for(int i=00 ; i <size ; i++){
                sum += vec[i];
            }
            return totalSum - sum;
        }
int main(){

    
     vector<int> vec = {6 , 4 , 1 , 3 , 2 ,0};
     int size = vec.size();
     int ans = missingArray(vec , size);
     cout<<ans<<endl;
     return 0;
   
}