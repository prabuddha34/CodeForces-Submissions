#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int na, ma;
    cin >> na >> ma;
 
    vector<string> a(na);
    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }
 
    int nb, mb;
    cin >> nb >> mb;
 
    vector<string> b(nb);
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }
 
    int bestCount = -1;
    int bestX = 0, bestY = 0;
 
    for (int x = -55; x <= 55; x++) {
        for (int y = -55; y <= 55; y++) {
 
            int count = 0;
 
            for (int i = 0; i < na; i++) {
                for (int j = 0; j < ma; j++) {
 
                    int bi = i + x;
                    int bj = j + y;
 
                    if (bi >= 0 && bi < nb && bj >= 0 && bj < mb) {
                        if (a[i][j] == '1' && b[bi][bj] == '1') {
                            count++;
                        }
                    }
                }
            }
 
            if (count > bestCount) {
                bestCount = count;
                bestX = x;
                bestY = y;
            }
        }
    }
 
    cout << bestX << " " << bestY << endl;
 
    return 0;
}