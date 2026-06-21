 
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int x = (a + b - c) / 2; // 1-2
    int y = (b + c - a) / 2; // 2-3
    int z = (c + a - b) / 2; // 3-1
 
    if (x < 0 || y < 0 || z < 0 || x + z != a || x + y != b || y + z != c) {
        cout << "Impossible
";
    } else {
        cout << x << " " << y << " " << z << endl;
    }
 
    return 0;
}