#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    getline(cin , str);
    int count = 0;
    for(auto s : str){
        char ch  = s;
        if( ch >= 65 && ch <=90){
            ch += 32;
        }
        if(ch == 'a' || ch == 'e'||ch=='i'||ch =='o'||ch=='u'){
            count++;
        }
    }

    cout<<count<<endl;
    return 0;

}
