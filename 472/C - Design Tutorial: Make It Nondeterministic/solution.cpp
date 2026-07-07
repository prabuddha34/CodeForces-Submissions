#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<string> f(n + 1), s(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> f[i] >> s[i];
 
        if (f[i] > s[i]) {
            swap(f[i], s[i]);
        }
    }
 
    vector<int> p(n);
 
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    string last = "";
 
    for (int i = 0; i < n; i++) {
        int person = p[i];
 
        if (f[person] > last) {
            last = f[person];
        }
        else if (s[person] > last) {
            last = s[person];
        }
        else {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}