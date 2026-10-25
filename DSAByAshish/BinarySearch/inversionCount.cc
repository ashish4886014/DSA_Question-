#include<iostream>
#include<vector>
using namespace std ;

int count ;
// !PRINT function
void print(vector<int>& vec){
    for(int ele : vec){
        cout<<ele<<" ";
    }
    cout<<endl;
}
// ! merge two sorted array
void mergeTwoSortedArray(vector<int>& a , vector<int>& b , vector<int>& vec){
    int n =  a.size();
    int m = b.size();
    int i = 0 , j = 0  , k =0;
    while( i < n && j < m){
        if(a[i] > b [j]){
            vec[k++] = b[j++];

        }
        else{
            vec[k++] = a[i++];
        }
        
    }
    while( i < n){
        vec[k++] = a[i++];
    }
    while(j < m){
        vec[k++] = b[j++];
    }

}

// !inersion function 
int inversionCount(vector<int>& a , vector<int>& b){
    int n = a.size();
    int m = b.size();
    int i =0 , j = 0 , cnt = 0;   
    while(i < n && j < m){
        if(a[i] > b[j]){
           cnt += n - i;
           j++;
        }
        else{
            i++;
        }
    }
    return cnt;
}
// !merge sorted function

void mergeSort(vector<int>& vec){
    int size =  vec.size() ;
    if(size == 1){
        return ;
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
     count += inversionCount(a , b);
    mergeTwoSortedArray(a, b , vec);


}
int main(){
    vector<int> vec = {1 , - 4 , 3 ,5};
    // print(vec);
    // print(vec);
    count =0 ;
    mergeSort(vec);
     cout<<count<<" ";
     cout<<endl;

    return 0;
    
}