#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> ans;
 
    while (n > 1) {
        ans.push_back(n);
 
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n /= i;
                break;
            }
        }
    }
 
    ans.push_back(1);
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}