#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int &x : a)
            cin >> x;
 
        sort(a.begin(), a.end());
 
        if (n == 1) {
            if (a[0] > 1)
                cout << "NO
";
            else
                cout << "YES
";
            continue;
        }
 
        if (a[n - 2] + 1 < a[n - 1])
            cout << "NO
";
        else
            cout << "YES
";
    }
}