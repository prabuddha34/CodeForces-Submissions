#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, w;
    cin >> n >> w;
 
    vector<int> a(n);
    vector<int> b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        b[i] = (a[i] + 1) / 2;
        w -= b[i];
    }
 
    if (w < 0) {
        cout << -1 << '
';
        return 0;
    }
 
    vector<pair<int, int>> cups;
 
    for (int i = 0; i < n; i++) {
        cups.push_back({a[i], i});
    }
 
    sort(cups.rbegin(), cups.rend());
 
    for (auto cup : cups) {
        int capacity = cup.first;
        int position = cup.second;
 
        int canAdd = capacity - b[position];
        int add = min(w, canAdd);
 
        b[position] += add;
        w -= add;
    }
 
    if (w > 0) {
        cout << -1 << '
';
        return 0;
    }
 
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
 
    cout << '
';
 
    return 0;
}