#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    long long mn = LLONG_MAX;
    long long cnt = 0;
 
    for (int i = 1; i < n; i++) {
        long long diff = a[i] - a[i - 1];
 
        if (diff < mn) {
            mn = diff;
            cnt = 1;
        }
        else if (diff == mn) {
            cnt++;
        }
    }
 
    cout << mn << " " << cnt << endl;
 
    return 0;
}