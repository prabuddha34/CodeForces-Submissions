#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long d;
    cin>>d;
    long long a,b;
    cin>>a>>b;
    vector<pair<long long, int>> clients;
    for (int i = 1; i <= n; i++) {
        long long x, y;
        cin >> x >> y;
 
        long long cost = x * a + y * b;
        clients.push_back({cost, i});
    }
    sort(clients.begin(), clients.end());
    vector<int>ans;
    for (int i=0;i<n;i++) {
        long long cost = clients[i].first;
        int index = clients[i].second;
        if (d >= cost) {
            d -= cost;
            ans.push_back(index);
        } else {
            break;
        }
    }
    cout << ans.size() << endl;
 
    for (int id : ans) {
        cout << id << " ";
    }
 
    return 0;
}