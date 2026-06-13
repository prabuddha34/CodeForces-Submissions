#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
    vector<int> cntA(6), cntB(6);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cntA[a[i]]++;
    }
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        cntB[b[i]]++;
    }
 
    for (int i = 1; i <= 5; i++) {
        if ((cntA[i] + cntB[i]) % 2) {
            cout << -1;
            return 0;
        }
    }
 
    int ans = 0;
 
    for (int i = 1; i <= 5; i++) {
        ans += abs(cntA[i] - cntB[i]) / 2;
    }
 
    cout << ans / 2;
 
    return 0;
}