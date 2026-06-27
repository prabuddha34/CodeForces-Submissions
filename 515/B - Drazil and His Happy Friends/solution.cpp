#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> boy(n, 0), girl(m, 0);
 
    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        boy[x] = 1;
    }
 
    int g;
    cin >> g;
    for (int i = 0; i < g; i++) {
        int y;
        cin >> y;
        girl[y] = 1;
    }
 
    for (int day = 0; day < 10000; day++) {
        int bi = day % n;
        int gi = day % m;
 
        if (boy[bi] || girl[gi]) {
            boy[bi] = 1;
            girl[gi] = 1;
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (!boy[i]) {
            cout << "No
";
            return 0;
        }
    }
 
    for (int i = 0; i < m; i++) {
        if (!girl[i]) {
            cout << "No
";
            return 0;
        }
    }
 
    cout << "Yes
";
 
    return 0;
}