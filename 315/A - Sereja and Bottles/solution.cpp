#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        bool canOpen = false;
 
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] == b[j]) {
                canOpen = true;
            }
        }
 
        if (canOpen == false) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}