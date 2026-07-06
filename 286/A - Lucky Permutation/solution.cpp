#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n % 4 == 2 || n % 4 == 3) {
        cout << -1 << endl;
        return 0;
    }
 
    vector<int> p(n + 1);
 
    int l = 1, r = n;
 
    while (l < r) {
        int a = l;
        int b = r;
        int c = l + 1;
        int d = r - 1;
 
        p[a] = c;
        p[c] = b;
        p[b] = d;
        p[d] = a;
 
        l += 2;
        r -= 2;
    }
 
    if (l == r) {
        p[l] = l;
    }
 
    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
 
    return 0;
}