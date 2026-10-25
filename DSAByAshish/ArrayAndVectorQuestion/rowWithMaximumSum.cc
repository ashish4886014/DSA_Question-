#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{2 , 3 ,4  ,5 }, {12 ,3 , 45 , 67}, {8 , 5 , 3 , 2}};
    int rowSize = vec.size();
    int maxSum =0;
    int rowMaxSum = 0;

    for(int i = 0 ; i < rowSize ; i++){
        int sum = 0;
        for(int j = 0  ; j < vec[i].size(); j++ ){
            sum += vec[i][j];
        } 
        if(sum > maxSum){
            rowMaxSum = i;
        }
      maxSum = max(maxSum , sum);
    }

    cout<<"maximum sum is "<<maxSum<<endl;
    cout<<"and ROw number is :"<<rowMaxSum;
    return 0;

}