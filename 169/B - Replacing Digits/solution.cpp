#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, s;
    cin >> a >> s;
 
    int cnt[10] = {0};
 
    for (char c : s) {
        cnt[c - '0']++;
    }
 
    for (int i = 0; i < a.size(); i++) {
        int cur = a[i] - '0';
 
        for (int d = 9; d > cur; d--) {
            if (cnt[d] > 0) {
                a[i] = char(d + '0');
                cnt[d]--;
                break;
            }
        }
    }
 
    cout << a << endl;
 
    return 0;
}