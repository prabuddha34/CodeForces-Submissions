#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> ans;
    int need = 1;
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
 
        if (x == need) {
            ans.push_back(2000 + i);
            need++;
        }
    }
 
    if (ans.empty()) {
        cout << 0;
        return 0;
    }
 
    cout << ans.size() << endl;
 
    for (int year : ans) {
        cout << year << " ";
    }
 
    return 0;
}