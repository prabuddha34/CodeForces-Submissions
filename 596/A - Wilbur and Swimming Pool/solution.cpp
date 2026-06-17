#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }
 
    int x[105], y[105];
 
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
 
    int minX = x[0], maxX = x[0];
    int minY = y[0], maxY = y[0];
 
    for (int i = 1; i < n; i++) {
        minX = min(minX, x[i]);
        maxX = max(maxX, x[i]);
 
        minY = min(minY, y[i]);
        maxY = max(maxY, y[i]);
    }
 
    int area = (maxX - minX) * (maxY - minY);
 
    if (area == 0)
        cout << -1 << endl;
    else
        cout << area << endl;
 
    return 0;
}