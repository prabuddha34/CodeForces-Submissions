#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    long long total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    if (total % k != 0) {
        cout << "No" << endl;
        return 0;
    }
 
    long long need = total / k;
    long long sum = 0;
    int len = 0;
 
    vector<int> ans;
 
    for (int i = 0; i < n; i++) {
        sum += a[i];
        len++;
 
        if (sum == need) {
            ans.push_back(len);
            sum = 0;
            len = 0;
        } else if (sum > need) {
            cout << "No" << endl;
            return 0;
        }
    }
 
    if (ans.size() == k) {
        cout << "Yes" << endl;
        for (int x : ans) {
            cout << x << " ";
        }
    } else {
        cout << "No" << endl;
    }
 
    return 0;
}