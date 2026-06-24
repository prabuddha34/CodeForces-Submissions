#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> cnt(k, 0);
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        cnt[x % k]++;
    }
 
    int boxes = 0;
 
    // remainder 0 pairs with itself
    boxes += (cnt[0] / 2) * 2;
 
    for (int r = 1; r <= k / 2; r++) {
        int other = k - r;
 
        if (r == other) {
            boxes += (cnt[r] / 2) * 2;
        } else if (r < other) {
            boxes += min(cnt[r], cnt[other]) * 2;
        }
    }
 
    cout << boxes << endl;
 
    return 0;
}