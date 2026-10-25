#include<iostream>
#include<stack>
using namespace std;
// void insertAtoriginalStack(stack<int> st , stack<int> helperStack){
  
   
// }
void print(stack<int>& st , stack<int>& helperStack){

    // ! top to bottom
      while(st.size() > 0){
        cout<<st.top()<<" ";
        helperStack.push(st.top());
        st.pop();
    }
    cout<<endl;
     
    // ! BOTTOM TO TOP
      while(helperStack.size() > 0){
        st.push(helperStack.top());
        helperStack.pop();
    }
    cout<<endl;
    // insertAtoriginalStack(st , helperStack);
   
}

// ! insert at index for stack 

void insertAt(stack<int>& s , int idex , int val){
    stack<int> h;
    while(s.size() > idex ){
        h.push(s.top());
        s.pop();
    }
    s.push(val);
    while(h.size() > 0){
        s.push(h.top());
        h.pop();
    }
}

// ! reverse for stack 

void reverseStack(stack<int>& st ){
     stack<int> h1 ;
    stack<int> h2 ;

     while(st.size() > 0){
        h1.push(st.top());
        st.pop();
    }

     while(h1.size() > 0){
        h2.push(h1.top());
        h1.pop();
    }

      while(h2.size() > 0){
        st.push(h2.top());
        h2.pop();
    }


}
//  ! stack pop 

// ! stack get 
int main(){

    stack<int> st;
    stack<int> helperStack ;
    stack<int> s ;
    stack<int> h3 ;
    s.push(23);
    s.push(4);
    s.push(56);
    s.push(78);
    s.push(89);
    s.push(90);

    print(s,h3);
    insertAt(s , 2 , 67);
    print(s , h3);
    cout<<endl;
   
    // st.push(34);
    // st.push(23);
    // st.push(56);
    // st.push(12);
    // st.push(768);
    // st.push(78);
    // reverseStack(st);

    // print(st, helperStack);
    //   cout<<"stack is empty";
    // cout<<st.top();
  
    // cout<<endl;
    // while(st.size() > 0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
  
    //  while(st.size() > 0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
  
    // return 0;

}