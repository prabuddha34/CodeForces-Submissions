#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int &x : a) cin >> x;
 
    sort(a.begin(), a.end());
 
    cout << a[(n - 1) / 2];
 
    return 0;
}