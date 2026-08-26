#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
 
        if (x % 2 == 0)
            x--;
 
        cout << x << " ";
    }
 
    return 0;
}