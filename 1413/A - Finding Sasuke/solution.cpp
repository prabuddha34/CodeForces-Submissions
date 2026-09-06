#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        vector<int> b(n);
        for (int i = 0; i < n; i=i+2) {
            b[i]=a[i+1];
            b[i+1]=-a[i];
 
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}