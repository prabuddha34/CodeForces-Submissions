#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    map<long long, int> freq;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
 
    int remove_count = 0;
 
    for (int i = 0; i < n; i++) {
        bool ok = false;
 
        for (int p = 0; p <= 31; p++) {
            long long power = 1LL << p;
            long long need = power - a[i];
 
            if (freq.count(need)) {
                if (need != a[i] || freq[a[i]] >= 2) {
                    ok = true;
                    break;
                }
            }
        }
 
        if (!ok) remove_count++;
    }
 
    cout << remove_count << '
';
 
    return 0;
}