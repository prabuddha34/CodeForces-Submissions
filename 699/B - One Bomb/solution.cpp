#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> grid(n);
    vector<int> row(n, 0), col(m, 0);
 
    int total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                row[i]++;
                col[j]++;
                total++;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int destroyed = row[i] + col[j];
 
            if (grid[i][j] == '*') {
                destroyed--; // counted twice
            }
 
            if (destroyed == total) {
                cout << "YES
";
                cout << i + 1 << " " << j + 1 << "
";
                return 0;
            }
        }
    }
 
    cout << "NO
";
    return 0;
}