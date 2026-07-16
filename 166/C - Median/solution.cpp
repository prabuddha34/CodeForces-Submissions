#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n >> x;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int ans = 0;
 
    while (true) {
        sort(a.begin(), a.end());
 
        int pos = (a.size() - 1) / 2;
 
        if (a[pos] == x)
            break;
 
        a.push_back(x);
        ans++;
    }
 
    cout << ans;
}