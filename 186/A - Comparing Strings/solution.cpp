#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
 
    if (a.size() != b.size()) {
        cout << "NO
";
        return 0;
    }
 
    vector<int> pos;
 
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            pos.push_back(i);
        }
    }
 
    if (pos.size() != 2) {
        cout << "NO
";
        return 0;
    }
 
    swap(a[pos[0]], a[pos[1]]);
 
    if (a == b) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
 
    return 0;
}