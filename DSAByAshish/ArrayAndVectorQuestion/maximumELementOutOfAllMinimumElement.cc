#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<vector<int>> vec = {{9, 4 , 8 , 4}, {6 , 1 , 1 ,51},{2  , 2 , 3 , 6}};
    int rowSize = vec.size();
    int maxElement = INT_MIN;
    int maxEleRow ;
    for(int i =0  ; i < rowSize ; i++){
        int minEle = INT_MAX;
        for(int j = 0 ; j < vec[i].size() ; j++){
            if(vec[i][j] < minEle){
                minEle = vec[i][j];
             
            }

        }
        if(maxElement < minEle){
            maxEleRow = i;
        }

        maxElement = max(maxElement , minEle);
    }

    cout<<"maximum element is :"<<maxElement<<endl;
    cout<<"and index of maximum element is :"<<maxEleRow;

    return 0;

}