#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<vector<int>> v(2001, vector<int>(n + 1));
 
        for (int i = 1; i <= n; i++) {
            cin >> v[0][i];
        }
 
        for (int step = 1; step <= 2000; step++) {
            vector<int> freq(n + 1, 0);
 
            for (int i = 1; i <= n; i++) {
                freq[v[step - 1][i]]++;
            }
 
            for (int i = 1; i <= n; i++) {
                v[step][i] = freq[v[step - 1][i]];
            }
        }
 
        int q;
        cin >> q;
 
        while (q--) {
            int x;
            long long k;
            cin >> x >> k;
 
            if (k > 2000) k = 2000;
 
            cout << v[k][x] << endl;
        }
    }
 
    return 0;
}