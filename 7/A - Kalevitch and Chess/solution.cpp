#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char a[8][8];
 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> a[i][j];
        }
    }
 
    bool row[8] = {false};
    int ans = 0;
 
    for (int i = 0; i < 8; i++) {
        bool fullBlack = true;
 
        for (int j = 0; j < 8; j++) {
            if (a[i][j] == 'W') {
                fullBlack = false;
            }
        }
 
        if (fullBlack) {
            row[i] = true;
            ans++;
        }
    }
 
    for (int j = 0; j < 8; j++) {
        bool needColumn = false;
 
        for (int i = 0; i < 8; i++) {
            if (!row[i] && a[i][j] == 'B') {
                needColumn = true;
            }
        }
 
        if (needColumn) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}