#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    char a[105][105];
 
    int row[105][26] = {0};
    int col[105][26] = {0};
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
 
            row[i][a[i][j] - 'a']++;
            col[j][a[i][j] - 'a']++;
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int ch = a[i][j] - 'a';
 
            if (row[i][ch] == 1 && col[j][ch] == 1) {
                cout << a[i][j];
            }
        }
    }
 
    return 0;
}