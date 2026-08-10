#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, T;
    double c;
    cin >> n >> T >> c;
 
    vector<long long> a(n + 1), pref(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
 
    int m;
    cin >> m;
    vector<int> p(m);
    for (int &x : p) cin >> x;
 
    double mean = 0;
    int j = 0;
 
    for (int t = 1; t <= n; t++) {
        mean = (mean + (double)a[t] / T) / c;
 
        if (j < m && t == p[j]) {
            double real = (double)(pref[t] - pref[t - T]) / T;
            double error = fabs(mean - real) / real;
 
            cout << fixed << setprecision(6)
                 << real << ' ' << mean << ' ' << error << '
';
 
            j++;
        }
    }
 
    return 0;
}