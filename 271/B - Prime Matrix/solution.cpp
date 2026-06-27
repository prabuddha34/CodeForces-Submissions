#include <bits/stdc++.h>
using namespace std;
 
const int MAXV = 200000;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<bool> prime(MAXV + 1, true);
    prime[0] = prime[1] = false;
 
    for (int i = 2; i * i <= MAXV; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXV; j += i) {
                prime[j] = false;
            }
        }
    }
 
    vector<int> cost(MAXV + 1);
 
    int nextPrime = -1;
    for (int i = MAXV; i >= 1; i--) {
        if (prime[i]) nextPrime = i;
        cost[i] = nextPrime - i;
    }
 
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> row(n, 0), col(m, 0);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
 
            row[i] += cost[a[i][j]];
            col[j] += cost[a[i][j]];
        }
    }
 
    int ans = INT_MAX;
 
    for (int i = 0; i < n; i++) ans = min(ans, row[i]);
    for (int j = 0; j < m; j++) ans = min(ans, col[j]);
 
    cout << ans << endl;
 
    return 0;
}