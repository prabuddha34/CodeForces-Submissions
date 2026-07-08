#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string target = "CODEFORCES";
    int n = target.size();
 
    for (int left = 0; left <= n; left++) {
        string first = target.substr(0, left);
        string second = target.substr(left);
 
        if (s.size() >= first.size() + second.size()) {
            if (s.substr(0, first.size()) == first &&
                s.substr(s.size() - second.size()) == second) {
                cout << "YES
";
                return 0;
            }
        }
    }
 
    cout << "NO
";
    return 0;
}