#include<iostream>
#include<vector>
using namespace std;

bool searchElement(vector<vector<int>>& vec , int search){
    vector<vector<int>> ans ;
    int st = vec.size() ,end = vec[0].size() ;
    int  i = 0 , j = end - 1;
    while( i < st && j >= 0){
        if(vec[i][j] > search){
            j--;
        }
        else if( vec[i][j] < search ){
            i++;
        }
        else{
           return true;
        }
    }

    return false ;


}
int main(){
    vector<vector<int>> vec = {{1 , 4 , 7 , 11 , 15} , {2 , 5 ,8 , 12 , 19} , {3, 6 , 9 ,16 , 22 ,} , {10 , 13 , 14 ,17 ,24 } , {18 , 21 , 23 , 26 , 30}};
    
    int target = 78;
     cout<<searchElement(vec , target)<<endl;
    return 0;
    
}