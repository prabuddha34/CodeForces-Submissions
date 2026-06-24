#include <bits/stdc++.h>
using namespace std;
 
long long product(long long x) {
    long long p = 1;
 
    while (x > 0) {
        p *= x % 10;
        x /= 10;
    }
 
    return p;
}
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = product(n);
 
    string s = to_string(n);
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') continue;
 
        string t = s;
        t[i]--;
 
        for (int j = i + 1; j < t.size(); j++) {
            t[j] = '9';
        }
 
        long long num = stoll(t);
 
        if (num > 0 && num <= n) {
            ans = max(ans, product(num));
        }
    }
 
    cout << ans << endl;
 
    return 0;
}