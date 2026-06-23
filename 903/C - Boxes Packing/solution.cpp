#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
  map<long long,int>freq;
    for(int i=0;i<n;i++) {
        long long x;
        cin>>x;
        freq[x]++;
    }
    int ans = 0;
 
    for (auto p : freq) {
        ans = max(ans, p.second);
    }
 
    cout << ans << endl;
 
    return 0;
}