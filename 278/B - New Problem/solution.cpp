#include <bits/stdc++.h>
using namespace std;
 
set<string> st;
string ans;
 
bool found = false;
 
void dfs(string cur, int len) {
    if (found) return;
 
    if ((int)cur.size() == len) {
        if (!st.count(cur)) {
            ans = cur;
            found = true;
        }
        return;
    }
 
    for (char c = 'a'; c <= 'z'; c++) {
        dfs(cur + c, len);
        if (found) return;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while (n--) {
        string s;
        cin >> s;
 
        int m = s.size();
        for (int i = 0; i < m; i++) {
            string t = "";
            for (int j = i; j < m; j++) {
                t += s[j];
                st.insert(t);
            }
        }
    }
 
    for (int len = 1; len <= 3; len++) {
        dfs("", len);
        if (found) {
            cout << ans << '
';
            break;
        }
    }
}