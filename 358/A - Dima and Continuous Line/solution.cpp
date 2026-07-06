#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> x(n);
 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    for (int i = 0; i < n - 1; i++) {
        int l1 = min(x[i], x[i + 1]);
        int r1 = max(x[i], x[i + 1]);
 
        for (int j = i + 1; j < n - 1; j++) {
            int l2 = min(x[j], x[j + 1]);
            int r2 = max(x[j], x[j + 1]);
 
            if (l1 < l2 && l2 < r1 && r1 < r2) {
                cout << "yes
";
                return 0;
            }
 
            if (l2 < l1 && l1 < r2 && r2 < r1) {
                cout << "yes
";
                return 0;
            }
        }
    }
 
    cout << "no
";
 
    return 0;
}