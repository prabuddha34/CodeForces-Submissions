#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
 
    vector<ll> pref(n + 1, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }
 
    int m = n - k + 1;
    vector<ll> sum(m + 1);
 
    for (int i = 1; i <= m; i++)
        sum[i] = pref[i + k - 1] - pref[i - 1];
 
    vector<int> bestRight(m + 2);
 
    bestRight[m] = m;
 
    for (int i = m - 1; i >= 1; i--) {
        if (sum[i] >= sum[bestRight[i + 1]])
            bestRight[i] = i;
        else
            bestRight[i] = bestRight[i + 1];
    }
 
    ll best = -1;
    int ans1 = 1, ans2 = k + 1;
 
    for (int i = 1; i <= m - k; i++) {
        int j = bestRight[i + k];
        ll cur = sum[i] + sum[j];
 
        if (cur > best) {
            best = cur;
            ans1 = i;
            ans2 = j;
        }
    }
 
    cout << ans1 << " " << ans2 << "
";
}