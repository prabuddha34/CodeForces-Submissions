#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, t;
    cin >> n >> k >> t;
 
    int filled = n * k * t / 100;
 
    for (int i = 0; i < n; i++) {
        int x = min(k, filled);
        cout << x << " ";
        filled -= x;
    }
 
    return 0;
}