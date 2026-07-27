#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, s, f;
    cin >> n >> m >> s >> f;
 
    vector<tuple<int,int,int>> watch(m);
 
    for (int i = 0; i < m; i++) {
        int t, l, r;
        cin >> t >> l >> r;
        watch[i] = {t, l, r};
    }
 
    int idx = 0;
    int cur = s;
    int step = 1;
 
    while (cur != f) {
 
        bool blocked = false;
 
        if (idx < m && get<0>(watch[idx]) == step) {
 
            int l = get<1>(watch[idx]);
            int r = get<2>(watch[idx]);
 
            if (cur < f) {
                if ((cur >= l && cur <= r) ||
                    (cur + 1 >= l && cur + 1 <= r))
                    blocked = true;
            } else {
                if ((cur >= l && cur <= r) ||
                    (cur - 1 >= l && cur - 1 <= r))
                    blocked = true;
            }
 
            idx++;
        }
 
        if (blocked) {
            cout << 'X';
        } else {
            if (cur < f) {
                cout << 'R';
                cur++;
            } else {
                cout << 'L';
                cur--;
            }
        }
 
        step++;
    }
 
    cout << '
';
 
    return 0;
}