#include<iostream>
using namespace std;
// ! first method ans brute force approach
// int powers(int n , int m){
//     int ans ;
//     if(m == 1){
//         return n;
//     }
//     else{
//      ans =  n*powers(n , m-1);
//      return ans ;
//     }
    
// }

// ! second method and optimazied

double powers(double n , int m){
    double ans , p ;
    if(m == 1){
        return n ;
    }
    if( m % 2 == 0){
         p = powers(n , m /2);
        ans = p*p;
    }
    else{
        p = powers(n , m /2);
        ans = p*p*n;
    }
    return 1/ans;

}

int main(){
    double n;
    cout<<"enter based of number :";
    cin>>n;
    int m;
    cout<<"enter "<<n<<" to power :";
    cin>>m;
    if(m < 0){
        m = -1*(m);
       
    }
    cout<<powers(n, m)<<endl;
    
    return 0;
}