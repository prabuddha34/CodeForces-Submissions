#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int price[105];
 
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
 
    map<string, int> mp;
 
    for (int i = 0; i < m; i++) {
        string fruit;
        cin >> fruit;
        mp[fruit]++;
    }
 
    vector<int> cnt;
 
    for (auto it : mp) {
        cnt.push_back(it.second);
    }
 
    sort(price, price + n);
    sort(cnt.begin(), cnt.end(), greater<int>());
 
    int mn = 0;
    int mx = 0;
 
    for (int i = 0; i < cnt.size(); i++) {
        mn += cnt[i] * price[i];
        mx += cnt[i] * price[n - 1 - i];
    }
 
    cout << mn << " " << mx;
 
    return 0;
}