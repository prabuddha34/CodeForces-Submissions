#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    map<long long, pair<int, int>> seen;
    for (int i=1;i<=k;i++) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum=0;
        for (int j=0;j<n;j++) {
            cin >> a[j];
            sum+=a[j];
        }
        //see i am going for all the seq ok?lol
        for (int j=0;j<n;j++) {
            long long remainSum=sum-a[j];
            if (seen.count(remainSum)) {
                cout<<"YES"<<endl;
                cout << seen[remainSum].first << " "
                  << seen[remainSum].second << "
";
                cout << i << " " << j + 1 << "
";
                return 0;
            }
        }
        for (int j = 0; j < n; j++) {
            long long remainingSum = sum - a[j];
 
            if (!seen.count(remainingSum)) {
                seen[remainingSum] = {i, j + 1};
            }
        }
    }
 
    cout << "NO
";
        
 
    }
    