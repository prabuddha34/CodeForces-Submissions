#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
 
    int cakes1 = 0;
    int time1 = 0;
 
    while (cakes1 < n) {
        time1 += t;
        cakes1 += k;
    }
 
    int cakes2 = 0;
    int time2 = 0;
 
    while (cakes2 < n) {
        time2++;
 
        if (time2 % t == 0) {
            cakes2 += k;
        }
 
        if (time2 > d && (time2 - d) % t == 0) {
            cakes2 += k;
        }
    }
 
    if (time2 < time1)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}