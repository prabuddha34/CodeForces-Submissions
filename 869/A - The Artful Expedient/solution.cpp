#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
 
    bool present[4000005] = {false};
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        present[a[i]] = true;
    }
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        present[b[i]] = true;
    }
 
    int cnt = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = a[i] ^ b[j];
 
            if (present[val]) {
                cnt++;
            }
        }
    }
 
    if (cnt % 2 == 0) {
        cout << "Karen";
    } else {
        cout << "Koyomi";
    }
 
    return 0;
}