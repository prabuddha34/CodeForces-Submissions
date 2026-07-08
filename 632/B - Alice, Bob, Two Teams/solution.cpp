#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    string s;
    cin >> s;
 
    long long bob = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            bob += p[i];
        }
    }
 
    long long bestPrefix = 0;
    long long cur = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') cur += p[i];
        else cur -= p[i];
 
        bestPrefix = max(bestPrefix, cur);
    }
 
    long long bestSuffix = 0;
    cur = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'A') cur += p[i];
        else cur -= p[i];
 
        bestSuffix = max(bestSuffix, cur);
    }
 
    long long ans = bob + max(bestPrefix, bestSuffix);
 
    cout << ans << endl;
 
    return 0;
}