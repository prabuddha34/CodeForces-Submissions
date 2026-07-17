#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n), pos(n + 1);
 
    for (int &x : a)
        cin >> x;
 
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        pos[x] = i;
    }
 
    int k = 1;
 
    while (k < n && pos[a[k - 1]] < pos[a[k]])
        k++;
 
    cout << n - k;
 
    return 0;
}