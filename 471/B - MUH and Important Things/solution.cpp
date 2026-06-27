#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int,int>> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;      // difficulty
        a[i].second = i + 1;    // task number
    }
 
    sort(a.begin(), a.end());
 
    vector<int> pos;
 
    for (int i = 0; i < n - 1; i++) {
        if (a[i].first == a[i + 1].first) {
            pos.push_back(i);
        }
    }
 
    if (pos.size() < 2) {
        cout << "NO
";
        return 0;
    }
 
    cout << "YES
";
 
    for (auto x : a) cout << x.second << " ";
    cout << '
';
 
    swap(a[pos[0]], a[pos[0] + 1]);
    for (auto x : a) cout << x.second << " ";
    cout << '
';
 
    swap(a[pos[0]], a[pos[0] + 1]);
 
    swap(a[pos[1]], a[pos[1] + 1]);
    for (auto x : a) cout << x.second << " ";
    cout << '
';
 
    return 0;
}