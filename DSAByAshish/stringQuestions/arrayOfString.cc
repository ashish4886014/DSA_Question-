#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> s = {"ashish" , "vishal" , "chandan"};
    for(string str : s){
        cout<<str<<" ";
    }
    cout<<endl;
    return 0;

}
