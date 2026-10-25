#include<iostream>
using namespace std;
int main(){
    int arr[][3] = {{2 , 3, 4} , {2,4 ,5} ,{4, 5 ,3}};

    cout<<"withot transpose matrix "<<endl;


     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0  ; j < 3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0  ; i <3 ; i++){
        for(int j = 0 ; j < i ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    cout<<"transpose matrix"<<endl;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0  ; j < 3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}