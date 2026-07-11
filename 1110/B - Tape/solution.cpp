#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    long long m;
    cin >> n >> m >> k;
 
    vector<long long> b(n);
 
    for (long long &x : b)
        cin >> x;
 
    vector<long long> gaps;
 
    for (int i = 1; i < n; i++)
        gaps.push_back(b[i] - b[i - 1] - 1);
 
    sort(gaps.rbegin(), gaps.rend());
 
    long long answer = b[n - 1] - b[0] + 1;
 
    for (int i = 0; i < k - 1; i++)
        answer -= gaps[i];
 
    cout << answer << '
';
}