#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int diff = a[1] - a[0];
    bool isAP = true;
 
    for (int i = 1; i < n - 1; i++) {
        if (a[i + 1] - a[i] != diff) {
            isAP = false;
            break;
        }
    }
 
    if (isAP) {
        cout << a[n - 1] + diff;
    } else {
        cout << a[n - 1];
    }
 
    return 0;
}