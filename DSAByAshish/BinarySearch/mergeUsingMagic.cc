#include<iostream>
#include<vector>
using namespace std;

// !print function 

void print(vector<int>& vec){
    for(int ele : vec){
        cout<<ele<<" ";
    }
    cout<<endl;
}
// !merge of two sorted array
void mergeTwoSortedArray(vector<int>& a , vector<int>& b , vector<int>& vec){
    int i = 0 , j = 0 , k = 0 ;
    int n = a.size() , m = b .size();

    while ( i < n && j < m){
        if(a[i] > b[j]){
            vec[k++] = b[j++];
        }
        else{
            vec[k++] = a[i++];
        }
    }
    while(i < n){
        vec[k++] = a[i++];
    }
    while(j < m){
        vec[k++] = b[j++];
    }
}
// !mergeSort function and time complexcity = O(nlogn) and space complexcity = o(n)
void mergeSort(vector<int>& vec){

    int size = vec.size();
    if(size == 1){
        return;
    }
    vector<int> a(size/2);
    vector<int> b(size - size/2);
    int idx = 0 ;
    for(int i = 0 ; i < size/2 ; i++){
        a[i] = vec[idx++];
    }
    for(int i =0 ; i < size - size/2 ; i++){
        b[i] = vec[idx++];
    }
    mergeSort(a);
    mergeSort(b);
    mergeTwoSortedArray(a , b , vec);
    delete(&a);
    delete(&b);
}

int main(){
    vector<int> vec = {5, 2, 8 ,3,7 ,1, 4 , 6};
    print(vec);
    mergeSort(vec);
    print(vec);
    return 0;
}