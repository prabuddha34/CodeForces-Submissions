#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
 
    int C;
    cin >> C;
 
    vector<int> days;
 
    for (int i = 0; i < C; i++) {
        int x;
        cin >> x;
        days.push_back(x);
    }
 
    days.push_back(N + 1);
 
    int last = 0;
    int ans = 0;
 
    for (int day : days) {
        while (day - last > K) {
            last += K;
            ans++;
        }
 
        if (day <= N) {
            ans++;
            last = day;
        }
    }
 
    cout << ans;
 
    return 0;
}