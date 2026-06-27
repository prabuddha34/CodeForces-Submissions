#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long d;
    cin >> n >> d;
 
    vector<long long> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
 
    long long ans = 0;
    int l = 0;
 
    for (int r = 0; r < n; r++) {
        while (x[r] - x[l] > d) {
            l++;
        }
 
        long long cnt = r - l;
        ans += cnt * (cnt - 1) / 2;
    }
 
    cout << ans << endl;
 
    return 0;
}