#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    long long d[100005];
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
 
    bool vis[100005] = {0};
 
    long long pos = 1;
 
    while (true) {
        if (pos < 1 || pos > n) {
            cout << "FINITE
";
            return 0;
        }
 
        if (vis[pos]) {
            cout << "INFINITE
";
            return 0;
        }
 
        vis[pos] = true;
 
        if (s[pos - 1] == '>')
            pos += d[pos];
        else
            pos -= d[pos];
    }
 
    return 0;
}