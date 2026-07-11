#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int s, b;
    cin >> s >> b;
 
    vector<long long> ship(s);
 
    for (int i = 0; i < s; i++)
        cin >> ship[i];
 
    vector<pair<long long, long long>> base(b);
 
    for (int i = 0; i < b; i++)
        cin >> base[i].first >> base[i].second;
 
    sort(base.begin(), base.end());
 
    vector<long long> defence(b), prefix(b);
 
    for (int i = 0; i < b; i++) {
        defence[i] = base[i].first;
        prefix[i] = base[i].second;
 
        if (i > 0)
            prefix[i] += prefix[i - 1];
    }
 
    for (long long power : ship) {
        int pos = upper_bound(defence.begin(), defence.end(), power)
                  - defence.begin() - 1;
 
        if (pos == -1)
            cout << 0 << " ";
        else
            cout << prefix[pos] << " ";
    }
 
    cout << '
';
}