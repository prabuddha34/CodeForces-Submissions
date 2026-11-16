#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        vector<int> a(n);
        for (auto &v : a) scanf("%d", &v);
 
        const int STEPS = 30;
        vector<int> ans(STEPS + 1);
        vector<int> tmp;
        tmp.reserve((size_t)n * (n - 1) / 2);
 
        auto calc = [&](const vector<int> &b) {
            int mx = *max_element(b.begin(), b.end());
            int mn = *min_element(b.begin(), b.end());
            return mx - mn;
        };
 
        ans[0] = calc(a);
        for (int s = 1; s <= STEPS; s++) {
            tmp.clear();
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                    tmp.push_back(a[i] ^ a[j]);
            nth_element(tmp.begin(), tmp.begin() + (n - 1), tmp.end());
            a.assign(tmp.begin(), tmp.begin() + n);
            ans[s] = calc(a);
        }
 
        while (q--) {
            int x;
            scanf("%d", &x);
            if (x > STEPS) x = STEPS;
            printf("%d ", ans[x]);
        }
        printf("
");
    }
    return 0;
}