#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    for(char &ch : s){
        if(ch >= 65 && ch <= 90){
            ch += 32;
        }
        else if(ch >= 97 && ch <= 122){
            ch -= 32;

        }
    }
    cout<<s<<endl;
    return 0;
}