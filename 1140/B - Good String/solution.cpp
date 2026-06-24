#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int left = 0;
        while (left < n && s[left] == '<') {
            left++;
        }
 
        int right = 0;
        while (right < n && s[n - 1 - right] == '>') {
            right++;
        }
 
        cout << min(left, right) << '
';
    }
 
    return 0;
}