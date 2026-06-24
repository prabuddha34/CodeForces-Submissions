#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, s;
    cin >> n >> s;
 
    vector<long long> v(n);
 
    long long sum = 0;
    long long mn = LLONG_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        mn = min(mn, v[i]);
    }
 
    if (sum < s) {
        cout << -1 << endl;
    } else {
        cout << min(mn, (sum - s) / n) << endl;
    }
 
    return 0;
}