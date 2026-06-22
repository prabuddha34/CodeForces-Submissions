#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        int b;
        cin >> b;
 
        a[b] = i;
    }
 
    long long ans = 0;
 
    for (int i = 1; i < n; i++) {
        ans += abs(a[i] - a[i + 1]);
    }
 
    cout << ans << endl;
 
    return 0;
}