#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
// !worng soluton and 
    // vector<int> vec = {3 ,5 ,3 ,4};
    // int size = vec.size();
    // int limit = 5;
    // int boat =0 ;
    // int i = 0;
    // while(i < size){
    //     if(vec[i] >= limit){
    //         boat++;
    //         i++;
    //     }
    //     int j = i+1;
    //     while(j < size){
    //         if(vec[i]+ vec[j] <= limit){
    //             j++;
    //             boat++;
    //             break;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     i++;
    // }

    // cout<<"minimum number of boat :"<<boat;
    // return 0;

    // !corrcet solution hai
    vector<int> vec = {3 ,5 ,3 ,4};
    int limit = 5;
    int boat = 0 ;
    int size = vec.size();
    sort(vec.begin() , vec.end());
    int i = 0;
    int j =  size-1;
    while(i <= j){
        if(vec[i] + vec[j] <= limit){
            i++;
        }
        j--;
        boat++;
    }
    cout<<"minimum number of baot is :"<<boat;
    return 0;

}