#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    for (int x = 0; x * a <= n; x++) {
        int rem = n - x * a;
 
        if (rem % b == 0) {
            cout << "YES
";
            cout << x << " " << rem / b << '
';
            return 0;
        }
    }
 
    cout << "NO
";
 
    return 0;
}