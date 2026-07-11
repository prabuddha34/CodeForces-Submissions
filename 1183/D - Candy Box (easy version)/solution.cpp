#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
 
    while (q--) {
        int n;
        cin >> n;
 
        vector<int> freq(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        sort(freq.rbegin(), freq.rend());
 
        long long ans = 0;
        int allowed = n;
 
        for (int x : freq) {
            int take = min(x, allowed);
 
            if (take <= 0)
                break;
 
            ans += take;
            allowed = take - 1;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}