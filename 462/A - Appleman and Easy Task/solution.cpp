#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    char a[105][105];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
 
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            int cnt = 0;
 
            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
 
                if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                    if (a[ni][nj] == 'o') {
                        cnt++;
                    }
                }
            }
 
            if (cnt % 2 != 0) {
                cout << "NO";
                return 0;
            }
        }
    }
 
    cout << "YES";
    return 0;
}