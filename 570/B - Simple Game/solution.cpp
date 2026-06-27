#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    if (n == 1) {
        cout << 1 << '
';
    }
    else if (m == 1) {
        cout << 2 << '
';
    }
    else if (m == n) {
        cout << n - 1 << '
';
    }
    else {
        long long left = m - 1;
        long long right = n - m;
 
        if (left >= right)
            cout << m - 1 << '
';
        else
            cout << m + 1 << '
';
    }
 
    return 0;
}