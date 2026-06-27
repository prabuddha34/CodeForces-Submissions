#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    map<long long, int> freq;
 
    for (int i = 0; i < n; i++) {
        long long lang;
        cin >> lang;
        freq[lang]++;
    }
 
    int m;
    cin >> m;
 
    vector<long long> b(m), c(m);
 
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < m; i++) cin >> c[i];
 
    int ans = 0;
 
    for (int i = 1; i < m; i++) {
        int very_ans = freq[b[ans]];
        int almost_ans = freq[c[ans]];
 
        int very_cur = freq[b[i]];
        int almost_cur = freq[c[i]];
 
        if (very_cur > very_ans) {
            ans = i;
        } 
        else if (very_cur == very_ans && almost_cur > almost_ans) {
            ans = i;
        }
    }
 
    cout << ans + 1 << '
';
 
    return 0;
}