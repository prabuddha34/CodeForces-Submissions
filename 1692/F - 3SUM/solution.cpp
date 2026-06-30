#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> cnt(10, 0);
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x % 10]++;
        }
 
        bool ok = false;
 
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {
                    if ((i + j + k) % 10 == 3) {
                        vector<int> need(10, 0);
                        need[i]++;
                        need[j]++;
                        need[k]++;
 
                        bool can = true;
                        for (int d = 0; d < 10; d++) {
                            if (need[d] > cnt[d]) can = false;
                        }
 
                        if (can) ok = true;
                    }
                }
            }
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
 
    return 0;
}