#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        if (k > (n - 1) / 2) {
            cout << -1 << endl;
            continue;
        }
 
        vector<int> a(n);
 
  
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
 
 
        for (int i = 1; i <= 2 * k - 1; i += 2) {
            swap(a[i], a[i + 1]);
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}