#include <bits/stdc++.h>
using namespace std;
 
string s;
const string INF = string(200, 'z');
 
bool better(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
 
string dp[105][2];
bool done[105][2];
 
bool isLetter(char c) {
    return c >= 'a' && c <= 'z';
}
 
string solve(int i, int usedAt) {
    if (i == s.size()) {
        if (usedAt == 1) return "";
        return INF;
    }
 
    if (done[i][usedAt]) return dp[i][usedAt];
    done[i][usedAt] = true;
 
    string ans = INF;
 
    // Option 1: take normal letter
    {
        char ch = s[i];
        string rest = solve(i + 1, usedAt);
 
        if (rest != INF) {
            if (!(rest == "" && !isLetter(ch))) {
                string cur = ch + rest;
                if (better(cur, ans)) ans = cur;
            }
        }
    }
 
    // Option 2: replace "dot" with '.'
    if (i + 2 < s.size() && s.substr(i, 3) == "dot") {
        char ch = '.';
 
        if (i != 0) {
            string rest = solve(i + 3, usedAt);
 
            if (rest != INF && rest != "") {
                string cur = ch + rest;
                if (better(cur, ans)) ans = cur;
            }
        }
    }
 
    // Option 3: replace "at" with '@'
    if (i + 1 < s.size() && s.substr(i, 2) == "at") {
        char ch = '@';
 
        if (i != 0 && usedAt == 0) {
            string rest = solve(i + 2, 1);
 
            if (rest != INF && rest != "") {
                string cur = ch + rest;
                if (better(cur, ans)) ans = cur;
            }
        }
    }
 
    return dp[i][usedAt] = ans;
}
 
int main() {
    cin >> s;
 
    cout << solve(0, 0) << endl;
 
    return 0;
}