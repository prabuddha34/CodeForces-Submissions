#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    char gender[5005];
    int a[5005], b[5005];
 
    for (int i = 0; i < n; i++) {
        cin >> gender[i] >> a[i] >> b[i];
    }
 
    int ans = 0;
 
    for (int day = 1; day <= 366; day++) {
        int male = 0, female = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] <= day && day <= b[i]) {
                if (gender[i] == 'M')
                    male++;
                else
                    female++;
            }
        }
 
        ans = max(ans, 2 * min(male, female));
    }
 
    cout << ans << endl;
 
    return 0;
}