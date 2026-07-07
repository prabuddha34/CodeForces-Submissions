#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
 
    int T;
    cin >> T;
 
    sort(t.begin(), t.end());
 
    int ans = 1;
 
    for (int i = 0; i < n; i++) {
        int count = 0;
 
        for (int j = i; j < n; j++) {
            if (t[j] - t[i] <= T) {
                count++;
            }
        }
 
        ans = max(ans, count);
    }
 
    cout << ans << endl;
 
    return 0;
}