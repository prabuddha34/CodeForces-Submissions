#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string x) {
    int l = 0, r = x.size() - 1;
 
    while (l < r) {
        if (x[l] != x[r]) {
            return false;
        }
        l++;
        r--;
    }
 
    return true;
}
 
int main() {
    string s;
    int k;
 
    cin >> s;
    cin >> k;
 
    int n = s.size();
 
    if (n % k != 0) {
        cout << "NO" << endl;
        return 0;
    }
 
    int len = n / k;
 
    for (int i = 0; i < n; i += len) {
        string part = s.substr(i, len);
 
        if (!isPalindrome(part)) {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
 
    return 0;
}