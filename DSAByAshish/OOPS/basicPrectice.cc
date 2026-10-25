#include<iostream>
using namespace std;
// class student{                //user defined data types
//     public:
//     string name;             //attribute
//     int roll;
//     float cgpa;
// };

// class Car{
//     public:
//     string name;
//     string color;
//     int power ;
//     int seats;
//     int price;
//     float mileage;

//     void print(){
//     cout<<name<<" "<<color<<" "<<mileage<<" "<<power<<" "<<price<<" "<<seats;
// }

// void change(Car& s){
//     s.name = "ashish";
// }
// };

    //  student x;         //x is calles object
    //  x.name = "ashish";
    //  x.cgpa = 7.2;
    //  x.roll = 43;
    //  cout<<x.name<<" "<<x.cgpa<<" "<<x.roll;

    // Car c1;
    // c1.name = "kia sonet";
    // c1.color = "white";
    // c1.power = 118;
    // c1.mileage = 9.2;
    // c1.seats = 4;
    // Car c2;
    // c2 = {"toyota fortuner" , "white", 200 , 4, 4500000, 6.5};  
    // print(c1);
    // print(c2);       //order importent
    //  c1.change(c1);
    // c1.print();

    // !constructors 

    // class student {
    //     public:
    //     string name ;
    //     string address;
    //     int mobile;
    //     int pnCode;
    //     string village;
    //     student(string n , string a , int m , int pn , string vii){    //parameterised constructors
    //          name = n;
    //          address = a;
    //          mobile = m;
    //          pnCode = pn ;
    //          village = vii;
    //     }
        // ! constructor same name  is called constructor overloding
    //     student(string n){
    //         name = n;
    //     }
    //     student(){          //default constructor

    //     }
    // };
    // student x("ashish" ,"varansi" ,  747847, 2221207 , "dabethua");
    // cout<<x.name<<" "<<x.address<<" "<<x.mobile<<" "<<x.pnCode<<" "<<x.village<<endl;
    // student y("ashish");
    // cout<<y.name;

    // ! this keywoerd 
     class Criketer {
        public:
        string name;
        string lastName;
        int totalRun;
        float averageRun;
        Criketer(string name , string lastName , int totalRun , float averageRun){
            (*this).name = name ;
            this->lastName = lastName;
            this->totalRun = totalRun;
            this->averageRun = averageRun ;
        }
        void print(){
            cout<<name<<" "<<lastName<<" "<<totalRun<<" "<<averageRun;
        }

     };

    //    ! (*this). = p->

 

int main(){
    Criketer c1("virat" ,"kohli" , 463734 , 4374.45);
    c1.print();
    return 0;

}