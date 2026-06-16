#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, d;
    cin >> k >> d;
 
    if(d == 0) {
        if(k == 1) {
            cout << 0;
        } else {
            cout << "No solution";
        }
    } else {
        cout << d;
        for(int i = 1; i < k; i++) {
            cout << 0;
        }
    }
 
    return 0;
}