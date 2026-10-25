#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseFuntion(vector<int>& vec , int st , int end){
    while( st < end ){
        swap(vec[st++] , vec[end--]);
    }
    return vec;
}
vector<int> rotateFuntion(vector<int>& vec , int k){
    int st = 0;
    

    reverseFuntion(vec ,st , vec.size());   // all vector reverse
    reverseFuntion(vec , st , k );         // only reverse for k length vector
    st = k;
    reverseFuntion(vec ,st , vec.size() );  // only reverse for k to size of vector

    return vec;

}
int main(){
    vector<int> vec {1 , 2, 3 , 4 , 5 , 6 , 7};
    int k = 17;
    

    if(k = k%vec.size())
    
    rotateFuntion(vec , k);

    for(int valu : vec){
        cout<<valu<<" ";
    }

    return 0;
    
}

//time complexcity = o(n)