#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, v;
    cin >> n >> v;
 
    int ans[55];
    int cnt = 0;
 
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
 
        bool can = false;
 
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
 
            if (x < v) {
                can = true;
            }
        }
 
        if (can) {
            ans[cnt++] = i;
        }
    }
 
    cout << cnt << "
";
 
    for (int i = 0; i < cnt; i++) {
        cout << ans[i] << " ";
    }
 
    cout << "
";
 
    return 0;
}