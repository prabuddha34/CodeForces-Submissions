#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
int main() {
  long long p,y;
    cin>>p>>y;
    for (long long i=y;i>p;i--) {
        bool ok=true;
        for (long long j=2;j<=p;j++) {
            if (i%j==0) {
                ok=false;
                break;
            }
            if (j * j > i) {
                break;
            }
 
        }
        if (ok) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
 
 
    return 0;
}