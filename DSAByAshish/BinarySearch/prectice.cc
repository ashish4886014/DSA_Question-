#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> freq(100001, 0);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    bool found = false;

    for(int i = 1; i <= 100000; i++) {
        if(freq[i] >= 2) {
            cout << i << " ";
            found = true;
        }
    }

    if(!found) {
        cout << -1;
    }

    return 0;
}
