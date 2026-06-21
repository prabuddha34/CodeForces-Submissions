#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    long long total = 0;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    vector<int> ans;
 
    if(total % n == 0) {
        long long target = total / n;
 
        for(int i = 0; i < n; i++) {
            if(a[i] == target) {
                ans.push_back(i + 1);
            }
        }
    }
 
    cout << ans.size() << endl;
 
    for(int idx : ans) {
        cout << idx << " ";
    }
 
    cout << endl;
 
    return 0;
}