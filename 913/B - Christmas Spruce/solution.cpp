#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<vector<int>> child(n + 1);
 
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        child[p].push_back(i);
    }
 
    for (int i = 1; i <= n; i++) {
        if (child[i].empty()) continue;
 
        int leafChildren = 0;
 
        for (int x : child[i]) {
            if (child[x].empty()) {
                leafChildren++;
            }
        }
 
        if (leafChildren < 3) {
            cout << "No
";
            return 0;
        }
    }
 
    cout << "Yes
";
    return 0;
}