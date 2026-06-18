#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            int minLeft = a[j]; // default: stays same
            for (int i = 0; i < j; i++) {
                if (a[i] < a[j]) {
                    minLeft = min(minLeft, a[i]);
                }
            }
            sum += minLeft;
        }
        cout << sum << "
";
    }
    return 0;
}