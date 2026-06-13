#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    int i=0;
    int ans=0;
    while (i<n && s[i] == '<') {
        ans++;
        i++;
 
    }
 
    i = n - 1;
    while (i >= 0 && s[i] == '>') {
        ans++;
        i--;
    }
   cout << ans << endl;
    return 0;
}