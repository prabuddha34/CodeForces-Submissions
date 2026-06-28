#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int l = 0, r = n - 1;
    int last = 0;
    string ans;
 
    while (l <= r) {
        bool canL = a[l] > last;
        bool canR = a[r] > last;
 
        if (!canL && !canR) break;
 
        if (canL && canR) {
            if (a[l] < a[r]) {
                ans += 'L';
                last = a[l];
                l++;
            } else {
                ans += 'R';
                last = a[r];
                r--;
            }
        } 
        else if (canL) {
            ans += 'L';
            last = a[l];
            l++;
        } 
        else {
            ans += 'R';
            last = a[r];
            r--;
        }
    }
 
    cout << ans.size() << endl;
    cout << ans << endl;
 
    return 0;
}