#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int cnt[105] = {0};
 
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
 
        for (int day = a; day <= b; day++) {
            cnt[day]++;
        }
    }
 
    for (int day = 1; day <= n; day++) {
        if (cnt[day] != 1) {
            cout << day << " " << cnt[day];
            return 0;
        }
    }
 
    cout << "OK";
 
    return 0;
}