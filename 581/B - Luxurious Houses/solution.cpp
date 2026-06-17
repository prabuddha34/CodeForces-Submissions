#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long h[100005], ans[100005];
 
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
 
    long long maxRight = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        if (h[i] > maxRight) {
            ans[i] = 0;
        } else {
            ans[i] = maxRight - h[i] + 1;
        }
 
        if (h[i] > maxRight) {
            maxRight = h[i];
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}