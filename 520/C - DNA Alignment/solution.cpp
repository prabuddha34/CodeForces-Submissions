#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1000000007;
 
long long power(long long a, long long b) {
    long long ans = 1;
 
    while (b > 0) {
        if (b & 1) {
            ans = (ans * a) % MOD;
        }
 
        a = (a * a) % MOD;
        b /= 2;
    }
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int cnt[4] = {0};
 
    for (char c : s) {
        if (c == 'A') cnt[0]++;
        else if (c == 'C') cnt[1]++;
        else if (c == 'G') cnt[2]++;
        else cnt[3]++;
    }
 
    int mx = *max_element(cnt, cnt + 4);
 
    int k = 0;
 
    for (int i = 0; i < 4; i++) {
        if (cnt[i] == mx) {
            k++;
        }
    }
 
    cout << power(k, n) << '
';
 
    return 0;
}