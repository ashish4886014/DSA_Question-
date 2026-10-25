#include<iostream>
#include<vector>
using namespace  std;

// !method - 1 time complecity is = o (mn(m+n))  = o(n^3)

// vector<vector<int>> setZero(vector<vector<int>>& vec){
//     int row = vec.size() , col = vec[0].size();
//      vector<vector<int>> copyVector = vec;

//     for(int i= 0 ; i < row ; i++){
//         for(int j= 0  ; j < col ; j++){
//             if(copyVector[i][j] ==0){
//                 for(int k = 0 ; k < col ; k++ ){
//                     vec[i][k] = 0;
//                 }
//                 for(int k = 0 ; k < row ; k++){
//                     vec[k][j] = 0;
//                 }

//             }
//         }
//     }
//     return vec;
// }
//! method -2 time 
vector<vector<int>> setZero(vector<vector<int>>& vec ){
    int row = vec.size();
    int col = vec[0].size();
    vector<int> rowINdex(row , false) ;
    vector<int> colINdex(col , false) ;
  

    for(int i =0  ; i< row  ; i++ ){
        for(int j = 0 ; j < col ; j++){
            if(vec[i][j] == 0){
                rowINdex[i] = true;
                colINdex[j] = true;               
            }
        }
    }

    for(int i = 0  ; i < rowINdex.size() ; i++){
        if(rowINdex[i] == true){
            for(int j = 0 ; j< col ; j++){
                vec[i][j] = 0;
            }
        }
    }

    for(int j = 0  ; j < colINdex.size() ; j++){
        if(colINdex[j] == true){
            for(int i = 0  ; i < row ; i++){
                vec[i][j] = 0;
            }
        }

    }
    return vec;

}
int main(){
    vector<vector<int>> vec = {{2 , 0  ,1} , {1 , 2 , 3} , {4 , 5 , 6}};
    setZero(vec);

    for(vector<int> valu : vec){
        for(int ele : valu){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
   return 0; 
}