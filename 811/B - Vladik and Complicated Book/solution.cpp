#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> p(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
 
    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;
 
        int val = p[x];
        int smaller = 0;
 
        for (int i = l; i <= r; i++) {
            if (p[i] < val) {
                smaller++;
            }
        }
 
        int newPosition = l + smaller;
 
        if (newPosition == x) {
            cout << "Yes
";
        } else {
            cout << "No
";
        }
    }
 
    return 0;
}