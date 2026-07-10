#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<int> last(100001);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        last[a[i]] = i;
    }
 
    set<int> seen;
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (last[a[i]] == i) {
            ans += seen.size();
        }
 
        seen.insert(a[i]);
    }
 
    cout << ans << '
';
}