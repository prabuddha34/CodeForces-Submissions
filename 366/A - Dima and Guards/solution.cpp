#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 1; i <= 4; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int first = min(a, b);
        int second = min(c, d);
 
        if (first + second <= n) {
            first += n - (first + second);
            cout << i << " " << first << " " << second << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
    return 0;
}