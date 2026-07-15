#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    long long g = gcd(a, b);
 
    a /= g;
    b /= g;
 
    if (abs(a - b) == 1) {
        cout << "Equal";
    }
    else if (a < b) {
        cout << "Dasha";
    }
    else {
        cout << "Masha";
    }
 
    return 0;
}