#include<iostream>
#include<vector>
using namespace std;   

int main(){
    vector<vector<int>> vec = {{1 , 2 , 3 }, {4 , 5 , 6} , {7 , 8 ,9}};
    int n = vec.size() , m = vec[0].size();
    int minRow = 0 , maxRow  = n - 1;
    int minCol = 0  , maxCol = m -1;
    while(minRow <= maxRow  && minCol <= maxCol){
        if(minRow > maxRow || minCol > maxCol){
            break;
        }

        for(int i= minCol  ; i <= maxCol ; i++){
           cout<< vec[minRow][i]<<" ";
        }
        minRow++;

         if(minRow > maxRow || minCol > maxCol){
            break;
        }
        for(int  j = minRow ; j <= maxRow ; j++){
            cout<<vec[j][maxCol]<<" ";
        }
        maxCol--;

         if(minRow > maxRow || minCol > maxCol){
            break;
        }
        for(int  i = maxCol ; i >= minCol ; i--){
            cout<<vec[maxRow][i]<<" ";
        }
        maxRow--;

         if(minRow > maxRow || minCol > maxCol){
            break;
        }
        for(int j = maxRow ;  j >= minRow ; j--){
            cout<<vec[j][minCol]<<" ";

        }
        minCol++;
    }
    return 0;
}