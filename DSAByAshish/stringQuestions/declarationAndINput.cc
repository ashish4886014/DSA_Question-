#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ashish";
    string str1 ;
    getline(cin, str1);
    cout<<str1<<endl;
    cout<<str<<endl;
    for(auto ele : str){
        cout<<ele;

    }
    cout<<endl;
    cout<<str.size()<<endl;
    return 0;
}
