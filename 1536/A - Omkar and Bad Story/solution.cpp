#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        bool negative = false;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] < 0)
                negative = true;
        }
 
        if (negative) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        vector<int> ans;
 
     
        for (int i = 0; i <= 100; i++) {
            ans.push_back(i);
        }
 
        cout << ans.size() << '
';
 
        for (int x : ans) {
            cout << x << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}