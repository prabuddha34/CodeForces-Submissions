#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    map<string, int> freq;
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        freq[s]++;
        ans = max(ans, freq[s]);
    }
 
    cout << ans << endl;
 
    return 0;
}