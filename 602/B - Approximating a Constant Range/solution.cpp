#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    map<int, int> freq;
 
    int l = 0;
    int ans = 0;
 
    for (int r = 0; r < n; r++) {
        freq[a[r]]++;
 
        while (freq.rbegin()->first - freq.begin()->first > 1) {
            freq[a[l]]--;
 
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
 
            l++;
        }
 
        ans = max(ans, r - l + 1);
    }
 
    cout << ans << endl;
 
    return 0;
}