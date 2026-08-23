#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    vector<int> pos(n + 1, 0);
    vector<int> cnt(n + 1, 0);
    vector<int> b(m);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
        cnt[x]++;
    }
 
    for (int i = 0; i < m; i++)
        cin >> b[i];
 
    bool ambiguity = false;
 
    // First check EVERYTHING for impossibility
    for (int x : b) {
        if (cnt[x] == 0) {
            cout << "Impossible
";
            return 0;
        }
 
        if (cnt[x] > 1)
            ambiguity = true;
    }
 
  
    if (ambiguity) {
        cout << "Ambiguity
";
        return 0;
    }
 
    cout << "Possible
";
 
    for (int x : b)
        cout << pos[x] << " ";
 
    cout << '
';
 
    return 0;
}