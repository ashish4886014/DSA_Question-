#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{1 ,2 ,3}, {4 , 5, 6} , {7 , 8 , 9 }};

    int size =  vec.size();
    for(int  i =0  ; i < size ; i++){
        for(int  j =0  ; j < i  ; j++){
            swap(vec[i][j] , vec[j][i]);
        }
     
    }
    for(int i =0  ; i < size ; i++){
               int a = vec[i].size()-1 ;
        for(int j =0 ; j <vec[i].size()  ; j++){
            swap(vec[i][j], vec[i][a]);
            break;
        }
    }

    for(vector<int> valu : vec){
        for(int ele : valu){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;


}