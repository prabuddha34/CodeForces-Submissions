#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<pair<int, int>> a(n);
    map<int, int> freq;
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i;
        freq[a[i].first]++;
    }
    for (auto x : freq) {
        if (x.second > k) {
            cout << "NO
";
            return 0;
        }
    }
 
    sort(a.begin(), a.end());
 
    vector<int> color(n);
 
    for (int i = 0; i < n; i++) {
        color[a[i].second] = i % k + 1;
    }
 
    cout << "YES
";
 
    for (int x : color)
        cout << x << " ";
 
    cout << '
';
    return 0;
}