#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
     int n;
        cin >> n;
        long long c;
        cin >> c;
        vector<long long> a(n);
        long long score=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            score+=a[i]-c;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n/2;i++) {
            if (a[i]<c) {
                score+=c-a[i];
            }
            else {
                break;
            }
        }
        cout << score << endl;
 
    }
    return 0;
}