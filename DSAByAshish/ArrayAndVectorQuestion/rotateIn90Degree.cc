#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{0 ,1 , 2} , {3, 4 , 5}, {6,  7, 8}};
    int size = vec.size();
    for(int i =0  ; i < size ; i++){
      int a=  vec[i].size()- 1;
      for(int j= 0 ; j < vec[i].size()  ; j++){
        swap(vec[i][j] , vec[i][a]);
        break;
      }
      
      for(int  j = 0 ; j <=i ; j++){
        swap(vec[i][j] , vec[j][i]);
      }

    }
    for(vector<int> ele : vec){
        for(int vle : ele){
            cout<<vle<<" ";


        }
        cout<<endl;

    }

}