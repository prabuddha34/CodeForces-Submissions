#include <bits/stdc++.h>
using namespace std;
 
const int N = 100005;
 
int a[N];
int forward_gcd[N];
int backward_gcd[N];
 
int main() {
    int n;
    cin >> n;
    int x[105],d[105];
    for(int i=0;i<n;i++) {
        cin >> x[i] >> d[i];
    }
    for(int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (x[i]+d[i] ==x[j] &&x[j] + d[j] ==x[i]) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
 
 
    return 0;
}