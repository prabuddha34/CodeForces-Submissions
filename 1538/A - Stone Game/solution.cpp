#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        int mn = 101, mx = -1;
        int posMin, posMax;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] < mn) {
                mn = a[i];
                posMin = i;
            }
 
            if (a[i] > mx) {
                mx = a[i];
                posMax = i;
            }
        }
 
        int left = max(posMin, posMax) + 1;
 
        int right = n - min(posMin, posMax);
 
        int both = min(posMin + 1, posMax + 1)
                 + min(n - posMin, n - posMax);
 
        cout << min({left, right, both}) << endl;
    }
 
    return 0;
}