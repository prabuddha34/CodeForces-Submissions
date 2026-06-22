#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int ans = 1;
    int best = INT_MAX;
 
    for (int start = 1; start <= k; start++) {
        int sum = 0;
 
        for (int pos = start; pos <= n; pos += k) {
            sum += a[pos];
        }
 
        if (sum < best) {
            best = sum;
            ans = start;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}