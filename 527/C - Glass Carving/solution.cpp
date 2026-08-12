#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int w, h, n;
    cin >> w >> h >> n;
 
    set<int> X = {0, w};
    set<int> Y = {0, h};
 
    multiset<int> WX = {w};
    multiset<int> HY = {h};
 
    while (n--) {
        char type;
        int p;
        cin >> type >> p;
 
        if (type == 'V') {
            auto it = X.upper_bound(p);
            int r = *it;
            int l = *prev(it);
 
            WX.erase(WX.find(r - l));
            WX.insert(p - l);
            WX.insert(r - p);
 
            X.insert(p);
        } 
        else {
            auto it = Y.upper_bound(p);
            int r = *it;
            int l = *prev(it);
 
            HY.erase(HY.find(r - l));
            HY.insert(p - l);
            HY.insert(r - p);
 
            Y.insert(p);
        }
 
        long long maxWidth = *WX.rbegin();
        long long maxHeight = *HY.rbegin();
 
        cout << maxWidth * maxHeight << '
';
    }
 
    return 0;
}