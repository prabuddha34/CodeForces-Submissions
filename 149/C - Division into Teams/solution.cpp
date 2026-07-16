#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int,int>> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
 
    sort(a.rbegin(), a.rend());
 
    vector<int> x, y;
 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            x.push_back(a[i].second);
        else
            y.push_back(a[i].second);
    }
 
    cout << x.size() << '
';
    for (int id : x)
        cout << id << ' ';
 
    cout << '
' << y.size() << '
';
    for (int id : y)
        cout << id << ' ';
 
    return 0;
}