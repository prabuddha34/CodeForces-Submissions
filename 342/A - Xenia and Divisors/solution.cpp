#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> cnt(8, 0);
 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
 
    if(cnt[5] > 0 || cnt[7] > 0) {
        cout << -1 << endl;
        return 0;
    }
 
    vector<vector<int>> ans;
 
    while(cnt[4] > 0) {
        if(cnt[1] && cnt[2]) {
            ans.push_back({1, 2, 4});
            cnt[1]--;
            cnt[2]--;
            cnt[4]--;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
 
    while(cnt[3] > 0) {
        if(cnt[1] && cnt[6]) {
            ans.push_back({1, 3, 6});
            cnt[1]--;
            cnt[3]--;
            cnt[6]--;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
 
    while(cnt[1] > 0 || cnt[2] > 0 || cnt[6] > 0) {
        if(cnt[1] && cnt[2] && cnt[6]) {
            ans.push_back({1, 2, 6});
            cnt[1]--;
            cnt[2]--;
            cnt[6]--;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
 
    if(ans.size() != n / 3) {
        cout << -1 << endl;
        return 0;
    }
 
    for(auto g : ans) {
        cout << g[0] << " " << g[1] << " " << g[2] << endl;
    }
 
    return 0;
}