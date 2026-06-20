#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int coins = 0;
 
    while (true) {
        bool allMax = true;
 
        for (int i = 0; i < n; i++) {
            if (a[i] != k) {
                allMax = false;
                break;
            }
        }
 
        if (allMax) break;
 
        vector<int> used(k + 1, 0);
 
        for (int i = 0; i < n; i++) {
            if (a[i] < k && used[a[i]] == 0) {
                used[a[i]] = 1;
                a[i]++;
            }
        }
 
        coins++;
    }
 
    cout << coins;
 
    return 0;
}