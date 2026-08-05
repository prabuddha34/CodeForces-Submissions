#include <bits/stdc++.h>
using namespace std;
 
struct Candy {
    int h, m;
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, x;
    cin >> n >> x;
 
    vector<Candy> type[2];
 
    for (int i = 0; i < n; i++) {
        int t, h, m;
        cin >> t >> h >> m;
        type[t].push_back({h, m});
    }
 
    for (int t = 0; t < 2; t++)
        sort(type[t].begin(), type[t].end(),
             [](Candy a, Candy b) {
                 return a.h < b.h;
             });
 
    auto simulate = [&](int startType) {
        priority_queue<int> pq[2];
        int ptr[2] = {0, 0};
        int jump = x;
        int cnt = 0;
        int last = startType ^ 1;
 
        vector<bool> used0(type[0].size(), false);
        vector<bool> used1(type[1].size(), false);
 
        while (true) {
            int need = last ^ 1;
 
            while (ptr[need] < (int)type[need].size() &&
                   type[need][ptr[need]].h <= jump) {
                pq[need].push(type[need][ptr[need]].m);
                ptr[need]++;
            }
 
            if (pq[need].empty()) break;
 
            jump += pq[need].top();
            pq[need].pop();
            cnt++;
            last = need;
        }
 
        return cnt;
    };
 
    cout << max(simulate(0), simulate(1)) << "
";
    return 0;
}