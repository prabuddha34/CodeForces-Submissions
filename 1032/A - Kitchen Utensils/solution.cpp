#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int a[101] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
 
    int mx = 0;
    int dis = 0;
 
    for (int i = 1; i <= 100; i++) {
        if (a[i] > 0) {
            dis++;
            mx = max(mx, a[i]);
        }
    }
 
    int d = mx;
 
    while (d % k != 0) {
        d++;
    }
 
    cout << dis * d - n;
 
    return 0;
}