#include <bits/stdc++.h>
using namespace std;
 
int n;
long long l, r;
int x;
int c[20];
int ans = 0;
 
void solve(int idx, long long sum, int cnt, int mn, int mx)
{
    if (idx == n)
    {
        if (cnt >= 2 &&
            sum >= l &&
            sum <= r &&
            mx - mn >= x)
        {
            ans++;
        }
        return;
    }
 
    // Don't take this problem
    solve(idx + 1, sum, cnt, mn, mx);
 
    // Take this problem
    if (cnt == 0)
        solve(idx + 1, sum + c[idx], 1, c[idx], c[idx]);
    else
        solve(idx + 1,
              sum + c[idx],
              cnt + 1,
              min(mn, c[idx]),
              max(mx, c[idx]));
}
 
int main()
{
    cin >> n >> l >> r >> x;
 
    for (int i = 0; i < n; i++)
        cin >> c[i];
 
    solve(0, 0, 0, INT_MAX, INT_MIN);
 
    cout << ans;
}