#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> a(n);
    vector<int> cnt(m, 0);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '1') {
                cnt[j]++;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        bool canIgnore = true;
 
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '1' && cnt[j] == 1) {
                canIgnore = false;
                break;
            }
        }
 
        if (canIgnore) {
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO";
    return 0;
}