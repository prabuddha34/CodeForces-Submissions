#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<pair<int,int>> v; // {difficulty, position}
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
 
    sort(v.rbegin(), v.rend());
 
    long long ans = 0;
    vector<int> pos;
 
    for (int i = 0; i < k; i++) {
        ans += v[i].first;
        pos.push_back(v[i].second);
    }
 
    sort(pos.begin(), pos.end());
 
    cout << ans << endl;
 
    int last = 0;
 
    for (int i = 0; i < k - 1; i++) {
        cout << pos[i] - last << " ";
        last = pos[i];
    }
 
    cout << n - last << endl;
 
    return 0;
}