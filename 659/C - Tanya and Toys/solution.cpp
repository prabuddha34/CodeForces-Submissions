#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long m;
    cin >> n >> m;
 
    set<int> has;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        has.insert(x);
    }
 
    vector<int> ans;
 
    for (int i = 1; i <= 1000000000; i++) {
        if (has.count(i)) continue;
 
        if (m >= i) {
            ans.push_back(i);
            m -= i;
        } else {
            break;
        }
    }
 
    cout << ans.size() << endl;
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}