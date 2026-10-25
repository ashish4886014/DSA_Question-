#include<iostream>
#include<vector>
using namespace std;

//!time complecity is  = O(n or m less wla hoga)
int main(){
    vector<int> a = {1 ,2 , 4 , 4 , 8 ,10};
    vector<int> b = {2 ,4 , 3 , 4 , 6 , 8 , 9 , 10};
    vector<int> ans ;
    int sizeA = a.size();
    int sizeB = b.size();
    int i = 0  , j = 0;
    while(i  < sizeA &&  j < sizeB ){
        if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout<<"common element is :"<<endl;
    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}