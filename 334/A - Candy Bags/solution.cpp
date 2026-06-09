#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int l = 1;
    int r = n * n;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << l++ << " " << r--;
            if (j != n / 2 - 1) cout << " ";
        }
        cout << '
';
    }
 
    return 0;
}