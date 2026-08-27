#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> c(n), a(m);
 
    for (int i = 0; i < n; i++)
        cin >> c[i];
 
    for (int i = 0; i < m; i++)
        cin >> a[i];
 
    int j = 0;
    int ans = 0;
 
    for (int i = 0; i < n && j < m; i++) {
        if (a[j] >= c[i]) {
            ans++;
            j++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}