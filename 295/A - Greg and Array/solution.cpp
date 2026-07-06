#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<long long> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<int> l(m + 1), r(m + 1);
    vector<long long> d(m + 1);
 
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
 
    vector<long long> opCount(m + 2, 0);
 
    while (k--) {
        int x, y;
        cin >> x >> y;
 
        opCount[x]++;
        opCount[y + 1]--;
    }
 
    for (int i = 1; i <= m; i++) {
        opCount[i] += opCount[i - 1];
    }
 
    vector<long long> add(n + 2, 0);
 
    for (int i = 1; i <= m; i++) {
        long long totalAdd = d[i] * opCount[i];
 
        add[l[i]] += totalAdd;
        add[r[i] + 1] -= totalAdd;
    }
 
    for (int i = 1; i <= n; i++) {
        add[i] += add[i - 1];
        cout << a[i] + add[i] << " ";
    }
 
    return 0;
}