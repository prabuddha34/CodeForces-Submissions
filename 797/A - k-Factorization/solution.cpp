#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int a[25];
    int idx = 0;
 
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (idx < k - 1) {
                a[idx] = i;
                idx++;
                n = n / i;
            } else {
                break;
            }
        }
    }
 
    if (idx != k - 1 || n == 1) {
        cout << -1 << endl;
        return 0;
    }
 
    for (int i = 0; i < idx; i++) {
        cout << a[i] << " ";
    }
 
    cout << n << endl;
 
    return 0;
}