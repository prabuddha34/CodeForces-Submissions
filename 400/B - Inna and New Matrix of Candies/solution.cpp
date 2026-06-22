#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    set<int> distances;
 
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
 
        int g = -1, s = -1;
 
        for (int j = 0; j < m; j++) {
            if (row[j] == 'G') g = j;
            if (row[j] == 'S') s = j;
        }
 
        if (s < g) {
            cout << -1 << endl;
            return 0;
        }
 
        distances.insert(s - g);
    }
 
    cout << distances.size() << endl;
 
    return 0;
}