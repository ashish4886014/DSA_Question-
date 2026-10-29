#include<iostream>
#include<stack>
using namespace std;
class myQueue{
    private:
    stack<int> st;
    public:
    void push(int val){
        st.push(val);
    }
    void pop(){
        if(st.size()  ==0){
            cout<<"queue is empty";
            return ;
        }
        stack<int> helperStack;
        while(st.size() > 0){
            helperStack.push(st.top());
            st.pop();
        }
        helperStack.pop();
        while(helperStack.size() > 0){
            st.push(helperStack.top());
            helperStack.pop();
        }

    }
    void size(){
        cout<<st.size()<<endl;
    }
    void front(){
        if(st.size() == 0){
            cout<<"queue is empty";
            return ;

        }
        else{
            stack<int> helperStack ;
            while(st.size() > 0){
                helperStack.push(st.top());
                st.pop();
            }
            cout<<helperStack.top()<<endl;
            while(helperStack.size() > 0){
                st.push(helperStack.top());
                helperStack.pop();
            }
        }
    }
    bool empty(){
        if(st.size() ==0){
            return true ;
        }
        else{
            return false;
        }
    }
    void back(){
        if(st.size() ==0){
            cout<<"queue is empty";
            return;
        }
        else{
            cout<<st.top()<<endl;
        }
    }
    void display(){
        stack<int> helperStack ;
        while(st.size() > 0){
            helperStack.push(st.top());
            st.pop();
        }
        while(helperStack.size() > 0){
            cout<<helperStack.top()<<" ";
            st.push(helperStack.top());
            helperStack.pop();
        }
        cout<<endl;
    }

};
int main(){
    myQueue q;
    q.push(45);   //o(1)
    q.push(56);
    q.push(67);   
    q.front();
    q.back();
     q.display();
    q.pop();      //o(n)
    q.pop();
    q.size();
    q.push(89);
    q.display();
    cout<<q.empty()<<endl;
    return 0;

}
