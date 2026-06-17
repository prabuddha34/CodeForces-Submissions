#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long a[30];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a, a + n, greater<long long>());
 
    long long ans = 0;
    long long last = 1000000000000000000LL;
 
    for (int i = 0; i < n; i++) {
        long long take = min(a[i], last - 1);
 
        if (take <= 0) break;
 
        ans += take;
        last = take;
    }
 
    cout << ans << endl;
 
    return 0;
}