#include <bits/stdc++.h>
using namespace std;
 
long long solve(vector<int> &a, long long x) {
    int n = a.size();
 
    int left = 0;
    int right = n - 1;
 
    long long ans = 0;
 
    while (left < right) {
        if ((long long)a[left] + a[right] <= x) {
            ans += (right - left);
            left++;
        } else {
            right--;
        }
    }
 
    return ans;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        cout << solve(a, r) - solve(a, l - 1) << "
";
    }
 
    return 0;
}