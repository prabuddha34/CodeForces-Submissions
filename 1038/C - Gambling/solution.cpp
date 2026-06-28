#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    int i = n - 1;
    int j = n - 1;
 
    long long scoreA = 0, scoreB = 0;
 
    for (int turn = 0; turn < 2 * n; turn++) {
        long long maxA = (i >= 0 ? a[i] : -1);
        long long maxB = (j >= 0 ? b[j] : -1);
 
        if (turn % 2 == 0) {
            // A's turn
            if (maxA > maxB) {
                scoreA += maxA;
                i--;
            } else {
                j--;
            }
        } else {
            // B's turn
            if (maxB > maxA) {
                scoreB += maxB;
                j--;
            } else {
                i--;
            }
        }
    }
 
    cout << scoreA - scoreB << '
';
 
    return 0;
}