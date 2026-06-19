#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int reach = 0;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
 
        if (a <= reach) {
            reach = max(reach, b);
        }
    }
 
    if (reach >= m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}