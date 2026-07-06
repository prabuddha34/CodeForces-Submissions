#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    vector<int> color(n + 1, 0);
 
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
 
        vector<int> dancers = {a, b, c};
        vector<int> used(4, 0);
 
        for (int x : dancers) {
            if (color[x] != 0) {
                used[color[x]] = 1;
            }
        }
 
        vector<int> missing;
 
        for (int col = 1; col <= 3; col++) {
            if (!used[col]) {
                missing.push_back(col);
            }
        }
 
        int idx = 0;
 
        for (int x : dancers) {
            if (color[x] == 0) {
                color[x] = missing[idx];
                idx++;
            }
        }
    }
 
    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
 
    return 0;
}