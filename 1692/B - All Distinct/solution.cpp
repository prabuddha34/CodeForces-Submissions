#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        set<int> s;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
 
        int d = s.size();
 
        if ((n - d) % 2 == 0)
            cout << d << endl;
        else
            cout << d - 1 << endl;
    }
 
    return 0;
}