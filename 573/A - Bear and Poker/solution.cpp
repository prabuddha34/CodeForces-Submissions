#include <bits/stdc++.h>
using namespace std;
 
int clean(int x) {
    while (x % 2 == 0) x /= 2;
    while (x % 3 == 0) x /= 3;
    return x;
}
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = clean(a[i]);
    }
 
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << "No
";
            return 0;
        }
    }
 
    cout << "Yes
";
 
    return 0;
}