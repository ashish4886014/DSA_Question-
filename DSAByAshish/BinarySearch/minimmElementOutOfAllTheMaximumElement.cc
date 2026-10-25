#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// ! time complexcity i s = O(n^2)
int main(){
    vector<vector<int>> vec = {{9, 4 , 8 , 4}, {6 , 1 , 1 ,51},{2  , 2 , 3 , 6}};
    int rowSize = vec.size();
    int minElement = INT_MAX;
    int minEleRow = -1;

    for(int  i = 0  ; i <rowSize ; i++){
        int maxEle = INT_MIN;
        for(int j = 0  ; j < vec[i].size() ; j++){
            if(maxEle < vec[i][j]){
                maxEle = vec[i][j];
                minEleRow = i;
            }

        }
        minElement = min(minElement , maxEle);
    }
    cout<<"minimum Element is "<<minElement<<endl;
    cout<<"row number"<<minEleRow;
    return 0;
}
