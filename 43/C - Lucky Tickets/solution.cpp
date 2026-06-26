#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int cnt[3] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x % 3]++;
    }
 
    int ans = 0;
 
    ans += cnt[0] / 2;
    ans += min(cnt[1], cnt[2]);
 
    cout << ans << endl;
 
    return 0;
}