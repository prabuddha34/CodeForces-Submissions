#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
 
    for (int i = b; i <= 10000; i += a) {
        for (int j = d; j <= 10000; j += c) {
            if (i == j) {
                cout << i << endl;
                return 0;
            }
        }
    }
 
    cout << -1 << endl;
    return 0;
}