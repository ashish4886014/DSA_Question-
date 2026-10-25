#include<iostream> 
#include<set>
#include<vector>
using namespace std;
int main(){
       vector<int> a = {1 ,2 , 4 , 4 , 8 ,10};
       vector<int> b = {2 ,4 , 3 , 4 , 6 , 8 , 9 , 10};
       set<int> ans ;
       int sizeA = a.size();
       int sizeB = b.size();
       for(int i =0  ; i < sizeA ; i++){
        ans.insert(a[i]);
       }

       for(int j =0  ; j < sizeB ; j++){
        ans.insert(b[j]);
       }  
  cout<<"union element is :";
       for(int ele : ans){
        cout<<ele<<" ";
       }
       return 0;
}