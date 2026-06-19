#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long L, v, l, r;
        cin >> L >> v >> l >> r;
 
        long long total = L / v;
        long long blocked = r / v - (l - 1) / v;
 
        cout << total - blocked << endl;
    }
 
    return 0;
}