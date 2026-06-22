#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, c;
    long long x, y, z;
 
    cin >> a >> b >> c;
    cin >> x >> y >> z;
 
    long long extra = 0;
    long long need = 0;
 
    if (a >= x) extra += (a - x) / 2;
    else need += x - a;
 
    if (b >= y) extra += (b - y) / 2;
    else need += y - b;
 
    if (c >= z) extra += (c - z) / 2;
    else need += z - c;
 
    if (extra >= need)
        cout << "Yes
";
    else
        cout << "No
";
 
    return 0;
}