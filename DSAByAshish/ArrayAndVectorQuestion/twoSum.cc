#include<iostream>
#include<vector>
using namespace std;

// vector<int> searchElement(vector<int>& vec , int search){

    // vector<int> index(2 , -1);
    // int st = 0 , end = vec.size() - 1;


   



vector<int> searchElement(vector<int>& vec , int search){
    vector<int> index(2 , -1);
      
    for(int i = 0  ;  i < vec.size() ; i++){
        for(int j = i+1 ;  j < vec.size() ; j++){
            if(vec[j] + vec[i] == search ){
               index[0] = i;
               index[1] = j;
               return index ;
            } 
        }
    }

    return index ;   
}
int main(){
    vector<int> vec = { 23 , 4 ,  45 , 6 , 78};
    int search = 84 ;

    // method - 1 brute force approach time complexcity = o(n^2)
    vector<int> ans = searchElement( vec , search);

    //method-2  optimized approach time complecity = O(n)
    // vector<int> ans = searchElement(vec , search);

    for(int valu : ans){
        cout<<valu<<" ";
    }
    return 0;   
}