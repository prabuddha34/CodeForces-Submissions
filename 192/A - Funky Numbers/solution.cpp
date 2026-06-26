#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> tri;
    set<int> st;
 
    for (long long k = 1; ; k++) {
        long long val = k * (k + 1) / 2;
 
        if (val > n) break;
 
        tri.push_back(val);
        st.insert(val);
    }
 
    for (int x : tri) {
        int need = n - x;
 
        if (st.count(need)) {
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO";
    return 0;
}