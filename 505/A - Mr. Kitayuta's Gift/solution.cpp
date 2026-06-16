#include <bits/stdc++.h>
using namespace std;
 
bool palindrome(string s) {
    int l = 0;
    int r = s.size() - 1;
 
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
 
    return true;
}
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    for (int i = 0; i <= n; i++) {
        for (char ch = 'a'; ch <= 'z'; ch++) {
 
            string temp = s;
            temp.insert(temp.begin() + i, ch);
 
            if (palindrome(temp)) {
                cout << temp << endl;
                return 0;
            }
        }
    }
 
    cout << "NA" << endl;
 
    return 0;
}