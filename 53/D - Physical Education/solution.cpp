#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    vector<pair<int, int>> moves;
 
    for (int i = 0; i < n; i++) {
        if (b[i] == a[i]) {
            continue;
        }
 
        int pos = i;
 
        while (b[pos] != a[i]) {
            pos++;
        }
 
        while (pos > i) {
            swap(b[pos], b[pos - 1]);
 
            moves.push_back({pos, pos + 1});
 
            pos--;
        }
    }
 
    cout << moves.size() << '
';
 
    for (auto move : moves) {
        cout << move.first << " " << move.second << '
';
    }
 
    return 0;
}