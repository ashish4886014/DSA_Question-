#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<vector<int>> vec = {{1 , 2 , 3}, {4 , 5 ,6}, {7 , 8 , 9}};
    int rowSize = vec.size();
    for(int  i = 0  ; i <rowSize ; i++){
        int revCol = vec[i].size()-1;
        for(int j = 0  ;  j < vec[i].size() ; j++){
            if(i % 2 ==0){
                cout<<vec[i][j]<<" ";
            }
            else{
                cout<<vec[i][revCol--]<<" ";

            }
            
        }
        cout<<endl;
    }

return 0;

}