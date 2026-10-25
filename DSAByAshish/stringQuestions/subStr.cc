// !part of string is called substring 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ashish";
    string sub = str.substr(1,4);
    cout<<str.substr(0,  3)<<endl;
    cout<<sub<<endl;
    return 0;
}