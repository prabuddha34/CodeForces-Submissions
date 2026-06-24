#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<int> st;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
 
    vector<int> v(st.begin(), st.end());
 
    if (v.size() == 1) {
        cout << 0 << endl;
    }
    else if (v.size() == 2) {
        int diff = v[1] - v[0];
 
        if (diff % 2 == 0) cout << diff / 2 << endl;
        else cout << diff << endl;
    }
    else if (v.size() == 3) {
        if (v[1] - v[0] == v[2] - v[1]) {
            cout << v[1] - v[0] << endl;
        } else {
            cout << -1 << endl;
        }
    }
    else {
        cout << -1 << endl;
    }
 
    return 0;
}