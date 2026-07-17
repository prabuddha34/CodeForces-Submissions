#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> best(100001);
    int ans = 1;
 
    while (n--) {
        int x;
        cin >> x;
 
        int y = x;
        vector<int> p;
 
        for (int i = 2; i * i <= y; i++) {
            if (y % i == 0) {
                p.push_back(i);
 
                while (y % i == 0)
                    y /= i;
            }
        }
 
        if (y > 1)
            p.push_back(y);
 
        int cur = 1;
 
        for (int prime : p)
            cur = max(cur, best[prime] + 1);
 
        for (int prime : p)
            best[prime] = max(best[prime], cur);
 
        ans = max(ans, cur);
    }
 
    cout << ans;
 
    return 0;
}