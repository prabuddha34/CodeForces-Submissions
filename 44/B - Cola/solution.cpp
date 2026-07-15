#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
 
    long long ways = 0;
 
    for (int z = 0; z <= c; z++) {
        for (int y = 0; y <= b; y++) {
 
            int x = 2 * n - 4 * z - 2 * y;
 
            if (x < 0)
                break;
 
            if (x <= a)
                ways++;
        }
    }
 
    cout << ways;
}