#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        long long sum = 0;
        int even = 0, odd = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
 
            if (x % 2 == 0) even++;
            else odd++;
        }
 
        while (q--) {
            int type;
            long long x;
            cin >> type >> x;
 
            if (type == 0) {
                sum += even * x;
 
                if (x % 2 != 0) {
                    odd += even;
                    even = 0;
                }
            }
            else {
                sum += odd * x;
 
                if (x % 2 != 0) {
                    even += odd;
                    odd = 0;
                }
            }
 
            cout << sum << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}