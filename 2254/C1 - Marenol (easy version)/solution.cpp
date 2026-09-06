#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
 
        int aOdd = 0, aEven = 0;
        int bOdd = 0, bEven = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0) aOdd++;
                else aEven++;
            }
 
            if (b[i] == '1') {
                if (i % 2 == 0) bOdd++;
                else bEven++;
            }
        }
 
        if (aOdd == bOdd && aEven == bEven)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}