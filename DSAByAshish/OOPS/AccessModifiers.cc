#include<iostream>
using namespace std;
class Student{
    private :

   int  mobileNumber;
   int accountNumber;

   public :
   string name;
   string lastName;

   Student(string name , string lastName, int mobileNumber, int accountNumber){
    this->name = name ;
    this->lastName = lastName;
    this->accountNumber = accountNumber;
    this->mobileNumber = mobileNumber;

   }
   Student(){

   }
   void print(){
    cout<<name<<" "<<lastName<<" "<<endl;
   }
};
int main(){
    Student s1("ashish" , "prajapati" , 8510387, 221207);
    s1.print();
// ! is called access modifier by private

    // cout<<accountNumber;

    return 0;



}