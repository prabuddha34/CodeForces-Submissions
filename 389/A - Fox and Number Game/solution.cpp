#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int g = a[0];
    for (int i = 1; i < n; i++) {
        g = __gcd(g, a[i]);
    }
 
    cout << n * g << endl;
 
    return 0;
}