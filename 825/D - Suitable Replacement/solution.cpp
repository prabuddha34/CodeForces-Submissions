#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s, t;
    cin >> s >> t;
 
    long long cntS[26] = {};
    long long cntT[26] = {};
    long long q = 0;
 
    for (char c : s) {
        if (c == '?')
            q++;
        else
            cntS[c - 'a']++;
    }
 
    for (char c : t)
        cntT[c - 'a']++;
 
    auto possible = [&](long long k) {
        long long need = 0;
 
        for (int c = 0; c < 26; c++) {
            long long required = k * cntT[c];
 
            if (required > cntS[c]) {
                need += required - cntS[c];
 
                if (need > q)
                    return false;
            }
        }
 
        return true;
    };
 
    long long lo = 0;
    long long hi = s.size() / t.size();
 
    while (lo < hi) {
        long long mid = lo + (hi - lo + 1) / 2;
 
        if (possible(mid))
            lo = mid;
        else
            hi = mid - 1;
    }
 
    long long k = lo;
 
 
    long long add[26] = {};
 
    for (int c = 0; c < 26; c++) {
        long long required = k * cntT[c];
 
        if (required > cntS[c])
            add[c] = required - cntS[c];
    }
 
    
    int c = 0;
 
    for (char &x : s) {
        if (x != '?')
            continue;
 
        while (c < 26 && add[c] == 0)
            c++;
 
        if (c < 26) {
            x = char('a' + c);
            add[c]--;
        } else {
            
            x = 'a';
        }
    }
 
    cout << s << '
';
 
    return 0;
}