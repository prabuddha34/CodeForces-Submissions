#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int part[4][4];
 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> part[i][j];
        }
    }
 
    int crossed[4] = {0};
 
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 3; j++) {
            crossed[i] |= part[i][3 - j];
            crossed[(i + j) % 4] |= part[i][3 - j];
        }
    }
 
    bool accident = false;
 
    for (int i = 0; i < 4; i++) {
        if (crossed[i] + part[i][3] == 2) {
            accident = true;
        }
    }
 
    cout << (accident ? "YES" : "NO") << endl;
 
    return 0;
}