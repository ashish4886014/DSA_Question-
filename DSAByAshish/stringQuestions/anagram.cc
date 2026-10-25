#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagram(string& s1 , string& s2){
    if(s1.length() !=  s2.length()){
        return false;
    }
    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());
    if(s1 == s2 ) return true;
    else return false ;
}
int main(){
    string s1;
    getline(cin , s1);
    string s2;
    getline(cin , s2);
   bool ans =  anagram(s1 , s2);
   cout<<ans<<endl;
   return 0;
}