#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    bool hasOdd = false;
    bool hasEven = false;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (a[i] % 2) hasOdd = true;
        else hasEven = true;
    }
 
    if (hasOdd && hasEven) {
        sort(a.begin(), a.end());
    }
 
    for (int x : a) {
        cout << x << " ";
    }
 
    return 0;
}