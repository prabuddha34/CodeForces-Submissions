#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s, t;
    cin >> s >> t;
 
    string a = s, b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    if (a != b) {
        cout << -1 << endl;
        return 0;
    }
 
    vector<int> moves;
 
    for (int i = 0; i < n; i++) {
        int pos = i;
 
        while (s[pos] != t[i]) {
            pos++;
        }
 
        while (pos > i) {
            swap(s[pos], s[pos - 1]);
            moves.push_back(pos); 
            pos--;
        }
    }
 
    cout << moves.size() << endl;
 
    for (int x : moves) {
        cout << x << " ";
    }
 
    return 0;
}