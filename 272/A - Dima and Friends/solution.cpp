#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int sum = 0;
    int x;
 
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
 
    int ans = 0;
 
    for (int dima = 1; dima <= 5; dima++) {
        int total = sum + dima;
 
        if (total % (n + 1) != 1) {
            ans++;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}