#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int ans=0;
    int l=0;
    for (int r=0;r<n;r++) {
        while (a[r]-a[l]>5) {
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout<<ans<<endl;
    return 0;
}