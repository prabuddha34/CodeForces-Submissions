#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    int len = n.size();
 
    for (int i = 0; i < len; i++) {
        int x = n[i] - '0';
        if (x % 8 == 0) {
            cout << "YES
" << n[i] << '
';
            return 0;
        }
    }
 
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (n[i] == '0') continue;
 
            int x = (n[i] - '0') * 10 + (n[j] - '0');
 
            if (x % 8 == 0) {
                cout << "YES
" << n[i] << n[j] << '
';
                return 0;
            }
        }
    }
 
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            for (int k = j + 1; k < len; k++) {
                if (n[i] == '0') continue;
 
                int x = (n[i] - '0') * 100 +
                        (n[j] - '0') * 10 +
                        (n[k] - '0');
 
                if (x % 8 == 0) {
                    cout << "YES
";
                    cout << n[i] << n[j] << n[k] << '
';
                    return 0;
                }
            }
        }
    }
 
    for (char c : n) {
        if (c == '0') {
            cout << "YES
0
";
            return 0;
        }
    }
 
    cout << "NO
";
 
    return 0;
}