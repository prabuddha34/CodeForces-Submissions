#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        int g = gcd(k, 100);
 
        cout << k / g + (100 - k) / g << endl;
    }
 
    return 0;
}