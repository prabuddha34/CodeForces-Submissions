#include <bits/stdc++.h>
using namespace std;
 
string clean(string s) {
    string res = "";
 
    for (char c : s) {
        if (c == '-' || c == ';' || c == '_') continue;
        res += tolower(c);
    }
 
    return res;
}
 
int main() {
    string a[3];
 
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        a[i] = clean(a[i]);
    }
 
    set<string> valid;
 
    vector<int> p = {0, 1, 2};
 
    do {
        string combined = a[p[0]] + a[p[1]] + a[p[2]];
        valid.insert(combined);
    } while (next_permutation(p.begin(), p.end()));
 
    int n;
    cin >> n;
 
    while (n--) {
        string s;
        cin >> s;
 
        s = clean(s);
 
        if (valid.count(s)) {
            cout << "ACC
";
        } else {
            cout << "WA
";
        }
    }
 
    return 0;
}