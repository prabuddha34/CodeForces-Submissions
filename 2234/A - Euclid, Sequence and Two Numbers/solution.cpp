#include <bits/stdc++.h>
using namespace std;
 
const int N = 105;
 
long long a[N], tmp[N], seq[N];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a, a + n);
 
        long long x = a[n - 1];
        long long y = a[n - 2];
 
        seq[0] = x;
        seq[1] = y;
 
        int sz = 2;
        bool ok = true;
 
        while (sz < n) {
            long long nxt = seq[sz - 2] % seq[sz - 1];
 
            if (nxt == 0) {
                ok = false;
                break;
            }
 
            seq[sz++] = nxt;
        }
 
        if (!ok) {
            cout << -1 << "
";
            continue;
        }
 
        for (int i = 0; i < n; i++) tmp[i] = seq[i];
 
        sort(tmp, tmp + n);
 
        for (int i = 0; i < n; i++) {
            if (tmp[i] != a[i]) {
                ok = false;
                break;
            }
        }
 
        if (ok) cout << x << " " << y << "
";
        else cout << -1 << "
";
    }
 
    return 0;
}