#include<iostream>
#include<string>
using namespace std;
int main(){
        string str ;
        getline(cin , str);
        
        for(int s =0  ; s < str.size() ; s++ ){
            
            if( s % 2 != 0){
                str[s]  = 'a';

            }
        }

        for(auto s : str){
            cout<<s;
        }
        cout<<endl;


    return 0;

}