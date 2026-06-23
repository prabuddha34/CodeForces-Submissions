#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    int round = 1;
 
    while (true) {
        if ((a + 1) / 2 == (b + 1) / 2) {
            break;
        }
 
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        n /= 2;
        round++;
    }
 
    if (n == 2) {
        cout << "Final!
";
    } else {
        cout << round << "
";
    }
 
    return 0;
}