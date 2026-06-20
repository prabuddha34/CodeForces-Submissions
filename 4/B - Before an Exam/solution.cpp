#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int d, sumTime;
    cin >> d >> sumTime;
 
    vector<int> mn(d), mx(d), ans(d);
 
    int totalMin = 0, totalMax = 0;
 
    for (int i = 0; i < d; i++) {
        cin >> mn[i] >> mx[i];
 
        totalMin += mn[i];
        totalMax += mx[i];
 
        ans[i] = mn[i];
    }
 
    if (sumTime < totalMin || sumTime > totalMax) {
        cout << "NO
";
        return 0;
    }
 
    int extra = sumTime - totalMin;
 
    for (int i = 0; i < d; i++) {
        int canAdd = mx[i] - mn[i];
 
        int add = min(extra, canAdd);
 
        ans[i] += add;
        extra -= add;
    }
 
    cout << "YES
";
 
    for (int i = 0; i < d; i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}