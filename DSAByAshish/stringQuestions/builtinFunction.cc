#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    str.push_back('a');
    str.push_back('s');
    str.push_back('f');
  
    for(char c: str){
        cout<<c;
    }
    cout<<endl;
    return 0;
}