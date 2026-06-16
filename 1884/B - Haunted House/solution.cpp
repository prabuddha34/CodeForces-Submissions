#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        vector<int> zeros;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zeros.push_back(i);
            }
        }
 
        long long ans = 0;
        int totalZero = zeros.size();
 
        for (int i = 1; i <= n; i++) {
            if (i > totalZero) {
                cout << -1 << " ";
            } else {
                int zeroIndex = totalZero - i;
                int currentPos = zeros[zeroIndex];
                int targetPos = n - i;
 
                ans += targetPos - currentPos;
 
                cout << ans << " ";
            }
        }
 
        cout << endl;
    }
 
    return 0;
}