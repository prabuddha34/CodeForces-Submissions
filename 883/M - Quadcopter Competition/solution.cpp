#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
 
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
 
    if (dx == 0 || dy == 0)
        cout << 2 * (dx + dy) + 6 << '
';
    else
        cout << 2 * (dx + dy) + 4 << '
';
 
    return 0;
}