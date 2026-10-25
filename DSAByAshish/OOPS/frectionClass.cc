#include<iostream>
using namespace std;
class frection{
    public:
    int num ;
    int deno;

    frection(int num , int deno){
        this->num = num;
        this->deno = deno;
    }
    frection(){

    }
    int gcd(int n , int d){
        if(n == 0){
            return d;
        }
        else{
            return gcd(d % n , n);
        }
    }
    void additon(frection f){
        num = num*f.deno + deno*f.num;
        deno = deno*f.deno;
      int simplify =  gcd(num , deno);
        num = num / simplify;
        deno = deno / simplify;
        print();
    }
    void multiply(frection f){
     int    nums = num*f.num;
      int   denos = deno*f.deno;
      int simplify =  gcd(nums , denos);
        nums = nums / simplify;
        denos = denos / simplify;
      cout<<nums<<" / "<<denos<<endl;

    }
    void print(){
        cout<<num<<" / "<<deno<<endl;
    }
};
int main(){

    frection f1(2, 4);
    frection f2(4 ,2);
    f1.print();
    f2.print();
    f1.multiply(f2);
    f1.additon(f2);
    return 0;
   
}