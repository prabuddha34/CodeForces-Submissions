#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> t(n);
 
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
 
    int l = 0, r = n - 1;
    int alice = 0, bob = 0;
    int timeA = 0, timeB = 0;
 
    while (l <= r) {
        if (timeA <= timeB) {
            timeA += t[l];
            alice++;
            l++;
        } else {
            timeB += t[r];
            bob++;
            r--;
        }
    }
 
    cout << alice << " " << bob << endl;
 
    return 0;
}