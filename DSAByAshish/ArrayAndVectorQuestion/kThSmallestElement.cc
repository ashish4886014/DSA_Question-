#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> vec = {4 , 2 , 5 , 3 , 1};
    int k  = 2;
    int size = vec.size();
    for(int  i =  0  ; i <= k ; i++){
        int min =  INT_MAX;
        int index  = - 1;
        for(int  j = i ; j < size ; j++){
            if(vec[j] < min ){
                min = vec[j];
                index = j;
            }
        }
        swap(vec[i] , vec[index]);
    }
    cout<<vec[k];
    return 0;
    
}