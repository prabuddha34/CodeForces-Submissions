#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(m);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
 
    int i = 0; // required problem pointer
    int j = 0; // prepared problem pointer
 
    while (i < n && j < m) {
        if (b[j] >= a[i]) {
            // use b[j] to make required a[i]
            i++;
            j++;
        } else {
            // b[j] is too small, cannot help
            j++;
        }
    }
 
    cout << n - i << endl;
 
    return 0;
}