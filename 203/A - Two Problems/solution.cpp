#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, t, a, b, da, db;
    cin >> x >> t >> a >> b >> da >> db;
 
    if (x == 0) {
        cout << "YES
";
        return 0;
    }
 
    for (int i = 0; i < t; i++) {
        int s1 = a - i * da;
 
        if (s1 == x) {
            cout << "YES
";
            return 0;
        }
    }
 
    for (int j = 0; j < t; j++) {
        int s2 = b - j * db;
 
        if (s2 == x) {
            cout << "YES
";
            return 0;
        }
    }
 
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            int s1 = a - i * da;
            int s2 = b - j * db;
 
            if (s1 + s2 == x) {
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