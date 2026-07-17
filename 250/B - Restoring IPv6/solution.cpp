#include <bits/stdc++.h>
using namespace std;
 
vector<string> split(string s) {
    vector<string> v;
    string x;
 
    for (char c : s) {
        if (c == ':') {
            v.push_back(x);
            x = "";
        } else {
            x += c;
        }
    }
 
    v.push_back(x);
    return v;
}
 
string full(string x) {
    return string(4 - x.size(), '0') + x;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while (n--) {
        string s;
        cin >> s;
 
        vector<string> ans;
 
        int p = s.find("::");
 
        if (p == string::npos) {
            vector<string> v = split(s);
 
            for (string x : v)
                ans.push_back(full(x));
        } else {
            string left = s.substr(0, p);
            string right = s.substr(p + 2);
 
            vector<string> a, b;
 
            if (!left.empty())
                a = split(left);
 
            if (!right.empty())
                b = split(right);
 
            for (string x : a)
                ans.push_back(full(x));
 
            int zero = 8 - a.size() - b.size();
 
            while (zero--)
                ans.push_back("0000");
 
            for (string x : b)
                ans.push_back(full(x));
        }
 
        for (int i = 0; i < 8; i++) {
            if (i)
                cout << ":";
 
            cout << ans[i];
        }
 
        cout << '
';
    }
 
    return 0;
}