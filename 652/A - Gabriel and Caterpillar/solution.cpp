#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long h1, h2;
    long long a, b;
 
    cin >> h1 >> h2;
    cin >> a >> b;
 
    long long need = h2 - h1;
 
    if (8 * a >= need) {
        cout << 0 << endl;
        return 0;
    }
 
    need -= 8 * a;
 
    if (a <= b) {
        cout << -1 << endl;
        return 0;
    }
 
    long long perDay = 12 * (a - b);
 
    long long days = (need + perDay - 1) / perDay;
 
    cout << days << endl;
 
    return 0;
}