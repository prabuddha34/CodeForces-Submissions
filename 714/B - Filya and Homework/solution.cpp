#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<long long> s;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
 
    if (s.size() <= 2) {
        cout << "YES" << endl;
    } 
    else if (s.size() == 3) {
        vector<long long> v(s.begin(), s.end());
 
        if (v[1] - v[0] == v[2] - v[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}