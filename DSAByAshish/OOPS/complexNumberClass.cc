#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imageniary ;
    
    complex(int real , int imageniary){
        this->real = real;
        this->imageniary = imageniary;
    }
    complex(){

    }
    complex addition(complex c){
        complex temp;
        temp.real = real + c.real;
        temp.imageniary = imageniary + c.imageniary;
        return temp;
    }

    void print(){
        if(imageniary >= 0){
             cout<<real<<" + "<<imageniary<<"i"<<endl;
        }
        else{
            cout<<real<<" - "<<-imageniary<<"i"<<endl;
        }
       
    }
};
int main(){
    complex c1(3, -4);
    complex c2(2 , -4);
    c1.print();
    c2.print();
   complex c3 = c1.addition(c2);
    c3.print();
    c1.print();
    c2.print();

    return 0;

}