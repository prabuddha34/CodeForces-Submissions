#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> oddPos;
 
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
 
            if (x % 2 == 1) {
                oddPos.push_back(i);
            }
        }
 
        int oddCount = oddPos.size();
 
        if (oddCount < k || (oddCount - k) % 2 != 0) {
            cout << "NO
";
        } else {
            cout << "YES
";
 
            for (int i = 0; i < k - 1; i++) {
                cout << oddPos[i] << " ";
            }
 
            cout << n << '
';
        }
    }
 
    return 0;
}