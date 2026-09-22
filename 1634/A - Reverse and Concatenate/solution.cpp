#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        string s;
 
        cin >> n >> k;
        cin >> s;
 
        string r = s;
        reverse(r.begin(), r.end());
 
        if (k == 0 || s == r)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
 
    return 0;
}