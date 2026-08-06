#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n <= 3) {
        cout << "NO
";
        return 0;
    }
 
    cout << "YES
";
 
    if (n % 2 == 0) {
        cout << "1 * 2 = 2
";
        cout << "2 * 3 = 6
";
        cout << "6 * 4 = 24
";
 
        for (int i = 5; i <= n; i += 2) {
            cout << i + 1 << " - " << i << " = 1
";
            cout << "24 * 1 = 24
";
        }
    } else {
        cout << "5 * 4 = 20
";
        cout << "3 + 2 = 5
";
        cout << "20 + 5 = 25
";
        cout << "25 - 1 = 24
";
 
        for (int i = 6; i <= n; i += 2) {
            cout << i + 1 << " - " << i << " = 1
";
            cout << "24 * 1 = 24
";
        }
    }
 
    return 0;
}