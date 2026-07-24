#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a, b;
    cin >> a >> b;
 
    if (a.size() != b.size()) {
        cout << "NO";
        return 0;
    }
 
    bool x = false, y = false;
 
    for (char c : a)
        if (c == '1') x = true;
 
    for (char c : b)
        if (c == '1') y = true;
 
    cout << (x == y ? "YES" : "NO");
    return 0;
}