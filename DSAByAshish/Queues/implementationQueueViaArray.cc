#include<iostream>
#include<vector>
using namespace std;
class Queue{
    private :
    int length ;
    int f;
    int r;
    vector<int> arr;
    public :
    Queue(int capacity){    //! f to r-1 queue 
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity , 0);

    }
    void push(int val){
        if(length == arr.size()){
            cout<<"Queue is Full"<<endl;
            return ;
        }
        if(r == arr.size()){
            r = 0;
        }
        arr[r++]  = val;
        length++;


    }
    void pop(){
        if(length ==0){
            cout<<"queue is empty ";
            return ;
        }
        else{
          
         length--;
        }

    }
    void display(){

    }
    void front(){

    }
    int  size(){
        return length;

    }
    void capacity(){

    }
};

int main(){
    Queue q(4) ;
    q.push(12);
    q.push(30);
    q.push(80);
    q.display();


}