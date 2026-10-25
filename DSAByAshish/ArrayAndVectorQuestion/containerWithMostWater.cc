#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1 , 4 ,5 ,2 , 3 , 6};
    int size = vec.size();
    int maxArea = 0;
    for(int  i = 0 ; i <size ; i++){
        int area = 0;
        int j = i+1;
       
        int width;
       
        while( j < size){

            int height = min(i , j);
             if(vec[i] > vec[j]){
            width = vec[i] - vec[j];
        }
        else{
            width = vec[j] - vec[i];
        }

            area = height * width;
            maxArea = max( area , maxArea);
            j++;
        }
    }

    cout<<"contanter with most water is :"<<maxArea;
    return 0;

}