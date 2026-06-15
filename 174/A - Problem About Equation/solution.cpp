#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, b;
    cin >> n >> b;
 
    int a[105];
    double sum = b;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    double each = sum / n;
 
    for (int i = 0; i < n; i++) {
        if (a[i] > each) {
            cout << -1 << endl;
            return 0;
        }
    }
 
    cout << fixed << setprecision(6);
 
    for (int i = 0; i < n; i++) {
        cout << each - a[i] << endl;
    }
 
    return 0;
}