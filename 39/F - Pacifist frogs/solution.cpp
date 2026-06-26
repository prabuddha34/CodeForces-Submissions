#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    int m, k;
    cin >> n >> m >> k;
 
    vector<long long> d(m + 1);
    vector<long long> mosquito(k);
 
    for (int i = 1; i <= m; i++) {
        cin >> d[i];
    }
 
    for (int i = 0; i < k; i++) {
        cin >> mosquito[i];
    }
 
    vector<int> killed(m + 1, 0);
 
    int best = 1e9;
 
    for (int i = 1; i <= m; i++) {
        int cnt = 0;
 
        for (int j = 0; j < k; j++) {
            if (mosquito[j] % d[i] == 0) {
                cnt++;
            }
        }
 
        killed[i] = cnt;
        best = min(best, cnt);
    }
 
    vector<int> ans;
 
    for (int i = 1; i <= m; i++) {
        if (killed[i] == best) {
            ans.push_back(i);
        }
    }
 
    cout << ans.size() << endl;
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}