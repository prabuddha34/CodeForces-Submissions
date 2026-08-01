#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int n = s.size();
    
    long long ans = 1;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j + 1 < n && (s[j]-'0') + (s[j+1]-'0') == 9) {
            j++;
        }
        int len = j - i + 1; // length of this maximal chain
        if (len >= 2) {
            if (len % 2 == 0) {
                ans *= 1LL;
            } else {
                ans *= (long long)((len + 1) / 2);
            }
        }
        i = j + 1;
    }
    
    cout << ans << endl;
    
    return 0;
}