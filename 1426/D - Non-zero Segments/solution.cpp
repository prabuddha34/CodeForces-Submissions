#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    set<long long> st;
    st.insert(0);
 
    long long pref = 0;
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        pref += a[i];
 
        if (st.count(pref)) {
            ans++;
 
            st.clear();
            st.insert(0);
 
            pref = a[i];
            st.insert(pref);
        } else {
            st.insert(pref);
        }
    }
 
    cout << ans << '
';
}