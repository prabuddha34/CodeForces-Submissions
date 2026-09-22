#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
 
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
 
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            int mn = p[i];
            int pos = i;
 
            for (int j = i + 1; j < n; j++) {
                if (p[j] < mn) {
                    mn = p[j];
                    pos = j;
                }
            }
 
            if (pos != i) {
                l = i;
                r = pos;
                break;
            }
        }
        if (l == -1) {
            l = 0;
            r = 0;
        }
 
        reverse(p.begin() + l, p.begin() + r + 1);
 
        for (int x : p) {
            cout << x << " ";
        }
 
        cout << "
";
    }
 
    return 0;
}