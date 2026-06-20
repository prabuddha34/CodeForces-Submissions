#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int sum = 0;
    int minOdd = 101;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        sum += x;
 
        if (x % 2 == 1) {
            minOdd = min(minOdd, x);
        }
    }
 
    if (sum % 2 == 1) {
        cout << sum;
    } 
    else {
        if (minOdd == 101) cout << 0;
        else cout << sum - minOdd;
    }
 
    return 0;
}