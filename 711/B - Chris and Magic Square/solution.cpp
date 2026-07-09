#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
int main() {
int n;
    cin>>n;
    long long a[505][505];
    int x=-1,y=-1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
            if(a[i][j]==0) {
                x=i;
                y=j;
            }
        }
    }
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    long long target = 0;
    for (int i = 0; i < n; i++) {
        if (i != x) {
            for (int j = 0; j < n; j++) {
                target += a[i][j];
            }
            break;
        }
    }
    long long sum = 0;
    for (int j = 0; j < n; j++) {
        sum += a[x][j];
    }
 
    long long ans = target - sum;
 
    if (ans <= 0) {
        cout << -1 << endl;
        return 0;
    }
 
    a[x][y] = ans;
 
    for (int i = 0; i < n; i++) {
        long long s = 0;
        for (int j = 0; j < n; j++) {
            s += a[i][j];
        }
        if (s != target) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int j = 0; j < n; j++) {
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += a[i][j];
        }
        if (s != target) {
            cout << -1 << endl;
            return 0;
        }
    }
    long long d1 = 0;
    for (int i = 0; i < n; i++) {
        d1 += a[i][i];
    }
    if (d1 != target) {
        cout << -1 << endl;
        return 0;
    }
    long long d2 = 0;
    for (int i = 0; i < n; i++) {
        d2 += a[i][n - i - 1];
    }
    if (d2 != target) {
        cout << -1 << endl;
        return 0;
    }
 
    cout << ans << endl;
 
    return 0;
}