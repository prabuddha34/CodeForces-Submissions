#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    int m;
    cin >> m;
 
    vector<int> cnt(n / 2 + 2, 0);
 
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cnt[a]++;
    }
 
    int times = 0;
 
    for (int i = 1; i <= n / 2; i++) {
        times += cnt[i];
 
        if (times % 2 == 1) {
            swap(s[i - 1], s[n - i]);
        }
    }
 
    cout << s << '
';
 
    return 0;
}