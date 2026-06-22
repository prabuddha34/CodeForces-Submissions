#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k, q;
    cin >> n >> k >> q;
 
    vector<long long> t(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
 
    vector<int> top;
 
    while (q--) {
        int type, id;
        cin >> type >> id;
 
        if (type == 1) {
            top.push_back(id);
 
            sort(top.begin(), top.end(), [&](int a, int b) {
                return t[a] > t[b];
            });
 
            if ((int)top.size() > k) {
                top.pop_back();
            }
        } 
        else {
            bool shown = false;
 
            for (int x : top) {
                if (x == id) {
                    shown = true;
                    break;
                }
            }
 
            cout << (shown ? "YES" : "NO") << '
';
        }
    }
 
    return 0;
}