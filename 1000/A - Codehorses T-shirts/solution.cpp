#include <bits/stdc++.h>
using namespace std;
 
int diff(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) cnt++;
    }
    return cnt;
}
 
int main() {
    int n;
    cin >> n;
 
    vector<string> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    vector<bool> usedA(n, false), usedB(n, false);
 
    // remove exact matches
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!usedA[i] && !usedB[j] && a[i] == b[j]) {
                usedA[i] = true;
                usedB[j] = true;
                break;
            }
        }
    }
 
    int ans = 0;
 
    // match remaining strings with same length
    for (int i = 0; i < n; i++) {
        if (usedA[i]) continue;
 
        for (int j = 0; j < n; j++) {
            if (!usedB[j] && a[i].size() == b[j].size()) {
                ans += diff(a[i], b[j]);
                usedB[j] = true;
                break;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}