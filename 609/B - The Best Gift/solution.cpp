#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    long long cnt[11] = {0};
 
    for (int i = 0; i < n; i++) {
        int g;
        cin >> g;
        cnt[g]++;
    }
 
    long long ans = 0;
 
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
            ans += cnt[i] * cnt[j];
        }
    }
 
    cout << ans << endl;
 
    return 0;
}