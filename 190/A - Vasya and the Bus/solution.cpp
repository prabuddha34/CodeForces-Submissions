#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    if (n == 0 && m > 0) {
        cout << "Impossible
";
        return 0;
    }
 
    int mn = n + max(0, m - n);
    int mx = n + max(0, m - 1);
 
    cout << mn << " " << mx << endl;
 
    return 0;
}