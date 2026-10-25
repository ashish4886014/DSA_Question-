#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(34);
    st.push(12);
    st.top();
    cout<<st.top();   
    return 0;
}
