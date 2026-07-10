#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<long long> power(n), coins(n), answer(n);
    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    vector<pair<long long, int>> knights;
    for (int i = 0; i < n; i++) {
        knights.push_back({power[i], i});
    }
    sort(knights.begin(), knights.end());
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long sum = 0;
    for (auto knight : knights) {
        int index = knight.second;
        answer[index] = coins[index] + sum;
        pq.push(coins[index]);
        sum += coins[index];
        if ((int)pq.size() > k) {
            sum -= pq.top();
            pq.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    return 0;
}