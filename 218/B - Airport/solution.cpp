#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(m), b(m);
 
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
 
    int maxMoney = 0;
    int minMoney = 0;
 
    // maximum
    for (int i = 0; i < n; i++) {
        sort(a.begin(), a.end());
 
        int seats = a[m - 1];
        maxMoney += seats;
        a[m - 1]--;
    }
 
    // minimum
    for (int i = 0; i < n; i++) {
        sort(b.begin(), b.end());
 
        for (int j = 0; j < m; j++) {
            if (b[j] > 0) {
                minMoney += b[j];
                b[j]--;
                break;
            }
        }
    }
 
    cout << maxMoney << " " << minMoney << endl;
 
    return 0;
}