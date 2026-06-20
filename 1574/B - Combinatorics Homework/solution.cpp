#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--) {
      int a,b,c,m;
      cin>>a>>b>>c>>m;
      long long sum=a+b+c;
      long long big=max({a,b,c});
      long long mn = max(0LL, big - (sum - big) - 1);
      long long mx = sum - 3;
      if (mn <= m && m <= mx) {
         cout << "YES
";
      } else {
         cout << "NO
";
      }
 
 
   }
   return 0;
}