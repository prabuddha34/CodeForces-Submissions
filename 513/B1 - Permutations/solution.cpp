#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long m;
    cin >> n >> m;
 
    vector<long long> power(n + 1, 1);
 
    for (int i = 1; i <= n; i++) {
        power[i] = power[i - 1] * 2;
    }
 
    vector<int> ans(n);
    int left = 0;
    int right = n - 1;
 
    for (int num = 1; num <= n; num++) {
        int remaining = n - num;
 
        long long block = power[remaining - 1];
 
        if (remaining == 0) {
            ans[left] = num;
        }
        else if (m <= block) {
            ans[left] = num;
            left++;
        }
        else {
            ans[right] = num;
            right--;
            m -= block;
        }
    }
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}