#include<iostream>
using namespace std;
class Pointer{
    public:
    string name ;
    string lastNmae;
    string village;
    int mobileNumber;
    int pinCode;
    
    Pointer(string name , string lastName , string village , int mobileNumber ,int pinCode){
       (*this).name = name ;
        this->lastNmae = lastName;
        this->village = village;
        this->mobileNumber = mobileNumber;
        this->pinCode = pinCode;
    }
    Pointer(string name , string lastNmae , string village){
        this->name = name;
        this->lastNmae = lastNmae;
        this->village = village;
    }
    Pointer(){

    }
    void print(){
        cout<<name<<" "<<lastNmae<<endl;
        cout<<village<<" "<<mobileNumber<<endl;
        cout<<pinCode<<endl;
    }

};
int main(){
      Pointer* p = new Pointer("ashish", "prajapati" , "dabethua" , 6419839, 2207);
      p->print();

      Pointer p1("ashish" , "prajapati" , "dabethua");
      Pointer* p2 = &p1;
      p2->print();
      cout<<(*p2).name<<endl;
      cout<<p2->lastNmae<<endl;

      return 0;
}