#include <bits/stdc++.h>
using namespace std;
 
long long mergeCount(vector<int>& arr, int l, int r) {
    if (r - l <= 1) return 0;
    int mid = (l + r) / 2;
    long long cnt = mergeCount(arr, l, mid) + mergeCount(arr, mid, r);
    vector<int> tmp;
    int i = l, j = mid;
    while (i < mid && j < r) {
        if (arr[i] <= arr[j]) {
            tmp.push_back(arr[i++]);
        } else {
            cnt += mid - i; 
            tmp.push_back(arr[j++]);
        }
    }
    while (i < mid) tmp.push_back(arr[i++]);
    while (j < r)   tmp.push_back(arr[j++]);
    for (int k = l; k < r; k++) arr[k] = tmp[k - l];
    return cnt;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
      
        
        set<pair<int,int>> available;
        for (int j = 0; j < n; j++) available.insert({b[j], j});
        
        vector<int> perm(n);
        bool valid = true;
        for (int i = 0; i < n; i++) {
            
            auto it = available.lower_bound({a[i], -1});
            if (it == available.end()) {
                valid = false;
                break;
            }
            perm[i] = it->second; 
            available.erase(it);
        }
        
        if (!valid) {
            cout << -1 << "
";
        } else {
            
            long long inv = mergeCount(perm, 0, n);
            cout << inv << "
";
        }
    }
    return 0;
}