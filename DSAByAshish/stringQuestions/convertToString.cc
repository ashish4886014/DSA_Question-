#include<iostream>
#include<algorithm>
#include<string>

// ! to_string time complexcity is = O(length)

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    while(n >0){
        int r = n %10;
        char ch = r + 48;
        s.push_back(ch);
        n =  n /10;

    }
    int i=0  , j =  s.length() - 1;
    while (i < j){
          swap(s[i] , s[j]);
          i++;
          j--;
    }
  cout<<s<<endl;
 
    return 0;
}