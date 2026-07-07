#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, x;
    cin >> n >> k >> x;
 
    vector<int> c(n);
 
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
 
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
       
        if (c[i] == x && c[i + 1] == x) {
            int destroyed = 2; 
 
            int left = i - 1;
            int right = i + 2;
 
            while (left >= 0 && right < n && c[left] == c[right]) {
                int color = c[left];
                int cntLeft = 0;
                int cntRight = 0;
 
                while (left >= 0 && c[left] == color) {
                    cntLeft++;
                    left--;
                }
 
                while (right < n && c[right] == color) {
                    cntRight++;
                    right++;
                }
 
                if (cntLeft + cntRight >= 3) {
                    destroyed += cntLeft + cntRight;
                } else {
                    break;
                }
            }
 
            ans = max(ans, destroyed);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}