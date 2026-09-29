#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int last=a[n-1];
        int secondlast=a[n-2];
        cout<<last+secondlast<<endl;
    }
 
    return 0;
}