#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(2 * n);
 
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        vector<long long> b;
 
        for (int i = 0; i < n; i++) {
            b.push_back(a[i]);
            b.push_back(a[i + n]);
        }
 
        for (int x : b) {
            cout << x << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}