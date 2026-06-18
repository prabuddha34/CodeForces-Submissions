#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    bool odd = false;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2) {
            odd = true;
        }
    }
 
    if (odd) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
 
    return 0;
}