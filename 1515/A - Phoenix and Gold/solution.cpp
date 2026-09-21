#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        int a[n];
        int sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
 
        if (sum == x) {
            cout << "NO" << endl;
            continue;
        }
 
        sort(a, a + n);
 
        sum = 0;
 
        for (int i = 0; i < n; i++) {
            sum += a[i];
 
           
            if (sum == x) {
                
                swap(a[i], a[i + 1]);
 
              
                sum -= a[i];
                sum += a[i];
            }
        }
 
        cout << "YES" << endl;
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}