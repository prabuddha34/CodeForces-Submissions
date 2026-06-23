#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    vector<bool> row(n + 1, false), col(n + 1, false);
 
    long long usedRows = 0, usedCols = 0;
 
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
 
        if (!row[x]) {
            row[x] = true;
            usedRows++;
        }
 
        if (!col[y]) {
            col[y] = true;
            usedCols++;
        }
 
        long long emptyRows = n - usedRows;
        long long emptyCols = n - usedCols;
 
        cout << emptyRows * emptyCols << " ";
    }
 
    return 0;
}