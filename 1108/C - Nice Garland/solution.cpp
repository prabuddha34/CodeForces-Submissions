#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    vector<string> patterns = {
        "RGB", "RBG", "GRB",
        "GBR", "BRG", "BGR"
    };
 
    int best = n + 1;
    string ans;
 
    for (string p : patterns) {
        string t = "";
        int changes = 0;
 
        for (int i = 0; i < n; i++) {
            t += p[i % 3];
            if (s[i] != t[i]) changes++;
        }
 
        if (changes < best) {
            best = changes;
            ans = t;
        }
    }
 
    cout << best << endl;
    cout << ans << endl;
 
    return 0;
}