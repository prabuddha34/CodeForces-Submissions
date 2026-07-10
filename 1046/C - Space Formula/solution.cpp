#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, d;
    cin >> n >> d;
    d--;
 
    vector<long long> s(n), p(n);
 
    for (auto &x : s) cin >> x;
    for (auto &x : p) cin >> x;
 
    long long target = s[d] + p[0];
 
    vector<long long> others;
 
    for (int i = 0; i < n; i++) {
        if (i != d)
            others.push_back(s[i]);
    }
 
    
    int bigPoint = 1;
    int smallPoint = n - 1;
    int better = 0;
 
    for (long long score : others) {
        if (score + p[smallPoint] > target) {
            
            better++;
            bigPoint++;
        } else {
            
            smallPoint--;
        }
    }
 
    cout << better + 1 << '
';
}