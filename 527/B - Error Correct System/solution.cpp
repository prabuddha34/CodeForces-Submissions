#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
 
    vector<int> a[26][26];
    int diff = 0, x = -1, y = -1;
 
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            diff++;
            a[s[i]-'a'][t[i]-'a'].push_back(i);
        }
    }
 
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < 26; j++)
            if (!a[i][j].empty() && !a[j][i].empty()) {
                x = a[i][j][0];
                y = a[j][i][0];
                cout << diff - 2 << '
';
                cout << x + 1 << ' ' << y + 1 << '
';
                return 0;
            }
 
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < 26; j++)
            if (!a[i][j].empty())
                for (int k = 0; k < 26; k++)
                    if (!a[k][i].empty()) {
                        x = a[i][j][0];
                        y = a[k][i][0];
                        cout << diff - 1 << '
';
                        cout << x + 1 << ' ' << y + 1 << '
';
                        return 0;
                    }
 
    cout << diff << '
';
    cout << "-1 -1
";
}