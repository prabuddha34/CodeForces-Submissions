#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int &x : a)
        cin >> x;
 
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        // Triangle and square cause infinitely many touching points
        if ((a[i] == 2 && a[i + 1] == 3) ||
            (a[i] == 3 && a[i + 1] == 2)) {
            cout << "Infinite
";
            return 0;
        }
 
        if (a[i] == 1 || a[i + 1] == 1) {
            if (a[i] == 2 || a[i + 1] == 2)
                ans += 3; // circle and triangle
            else
                ans += 4; // circle and square
        }
    }
 
    for (int i = 0; i < n - 2; i++) {
        if (a[i] == 3 && a[i + 1] == 1 && a[i + 2] == 2)
            ans--;
    }
 
    cout << "Finite
";
    cout << ans << '
';
}