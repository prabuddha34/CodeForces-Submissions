#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    if (k > n * n) {
        cout << -1 << '
';
        return 0;
    }
 
    vector<vector<int>> a(n, vector<int>(n, 0));
 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
 
            if (i == j) {
                if (k >= 1) {
                    a[i][j] = 1;
                    k--;
                }
            } else {
                if (k >= 2) {
                    a[i][j] = 1;
                    a[j][i] = 1;
                    k -= 2;
                }
            }
        }
    }
 
    if (k != 0) {
        cout << -1 << '
';
        return 0;
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '
';
    }
 
    return 0;
}