#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    int a, b;
    cin >> a >> b;
 
    vector<int> v;
 
    for (int len = 2; len <= 60; len++) {
 
        int allOnes = (1LL << len) - 1;
 
        for (int bit = 0; bit < len - 1; bit++) {
 
            int num = allOnes - (1LL << bit);
 
            if (num <= 1e18)
                v.push_back(num);
        }
    }
 
    sort(v.begin(), v.end());
 
    cout << upper_bound(v.begin(), v.end(), b)
            - lower_bound(v.begin(), v.end(), a);
}