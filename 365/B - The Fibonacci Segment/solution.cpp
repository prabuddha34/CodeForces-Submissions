#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long a[100005];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    if(n <= 2) {
        cout << n;
        return 0;
    }
 
    int len = 2;
    int ans = 2;
 
    for(int i = 2; i < n; i++) {
        if(a[i] == a[i - 1] + a[i - 2]) {
            len++;
        } else {
            len = 2;
        }
 
        ans = max(ans, len);
    }
 
    cout << ans;
 
    return 0;
}