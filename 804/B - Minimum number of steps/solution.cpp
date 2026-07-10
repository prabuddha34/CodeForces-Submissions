#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1000000007;
 
int main() {
    string s;
    cin >> s;
 
    long long countB = 0;
    long long answer = 0;
 
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'b') {
            countB++;
            countB %= MOD;
        } else {
            answer = (answer + countB) % MOD;
            countB = (countB * 2) % MOD;
        }
    }
 
    cout << answer << '
';
 
    return 0;
}