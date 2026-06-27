#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int a = 0; a * 1234567 <= n; a++) {
        for (int b = 0; a * 1234567 + b * 123456 <= n; b++) {
            int rem = n - a * 1234567 - b * 123456;
 
            if (rem % 1234 == 0) {
                cout << "YES
";
                return 0;
            }
        }
    }
 
    cout << "NO
";
    return 0;
}