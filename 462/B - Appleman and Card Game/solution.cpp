#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    vector<long long> freq(26, 0);
 
    for (char c : s) {
        freq[c - 'A']++;
    }
 
    sort(freq.rbegin(), freq.rend());
 
    long long ans = 0;
 
    for (int i = 0; i < 26; i++) {
        long long take = min((long long)k, freq[i]);
 
        ans += take * take;
        k -= take;
 
        if (k == 0) break;
    }
 
    cout << ans << '
';
 
    return 0;
}