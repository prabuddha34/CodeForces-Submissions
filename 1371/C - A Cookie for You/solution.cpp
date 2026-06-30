#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;
 
        if (min(a, b) >= m && a + b >= n + m)
            cout << "Yes
";
        else
            cout << "No
";
    }
 
    return 0;
}