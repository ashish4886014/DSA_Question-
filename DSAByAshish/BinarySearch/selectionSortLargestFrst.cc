#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int> vec= { 20 , 56 , 78 ,12 , 34 ,67 };
int size = vec.size();
for(int  i = size - 1  ; i  > 0  ; i--){
    int maxs =  INT_MIN ;
    int index = -1 ;
    for(int j =  0  ; j < i ; j++){
        if(vec[j] > maxs){
            maxs = vec[j];
            index = j ;
        }
    } 

    swap(vec[i] , vec[index]);
}
cout<<"sorting veector is :"<<endl;
for(int ele : vec ){
    cout<<ele<<" ";
}
return 0 ;
 
}