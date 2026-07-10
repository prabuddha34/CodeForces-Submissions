#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> s(n), c(n);
 
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> c[i];
 
    long long answer = LLONG_MAX;
 
    for (int j = 1; j < n - 1; j++) {
        long long leftCost = LLONG_MAX;
        long long rightCost = LLONG_MAX;
 
        for (int i = 0; i < j; i++) {
            if (s[i] < s[j]) {
                leftCost = min(leftCost, c[i]);
            }
        }
 
        for (int k = j + 1; k < n; k++) {
            if (s[j] < s[k]) {
                rightCost = min(rightCost, c[k]);
            }
        }
 
        if (leftCost != LLONG_MAX && rightCost != LLONG_MAX) {
            answer = min(answer, leftCost + c[j] + rightCost);
        }
    }
 
    if (answer == LLONG_MAX)
        cout << -1;
    else
        cout << answer;
 
    return 0;
}