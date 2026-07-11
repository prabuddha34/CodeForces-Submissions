#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<long long> a(n), gap;
 
    for (long long &x : a)
        cin >> x;
 
    for (int i = 1; i < n; i++)
        gap.push_back(a[i] - a[i - 1]);
 
    sort(gap.rbegin(), gap.rend());
 
    long long answer = a[n - 1] - a[0];
 
    for (int i = 0; i < k - 1; i++)
        answer -= gap[i];
 
    cout << answer << '
';
}