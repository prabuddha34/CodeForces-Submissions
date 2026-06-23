#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> ans;
    int k = 0;
 
    for (int i = 0; i < n - 1; i++) {
        ans.push_back(a[i]);
 
        if (__gcd(a[i], a[i + 1]) != 1) {
            ans.push_back(1);
            k++;
        }
    }
 
    ans.push_back(a[n - 1]);
 
    cout << k << endl;
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}