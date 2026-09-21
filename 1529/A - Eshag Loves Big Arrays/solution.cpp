#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int mn = *min_element(a, a + n);
 
        int cunt_lol = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == mn) {
                cunt_lol++;
            }
        }
 
        cout << n - cunt_lol << endl;
    }
 
    return 0;
}