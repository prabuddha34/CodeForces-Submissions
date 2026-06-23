#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int i = 0;
    int a = 0, b = 0, c = 0;
    int n = s.size();
 
    while (i < n && s[i] == 'a') {
        a++;
        i++;
    }
 
    while (i < n && s[i] == 'b') {
        b++;
        i++;
    }
 
    while (i < n && s[i] == 'c') {
        c++;
        i++;
    }
 
    if (i == n && a > 0 && b > 0 && c > 0 && (c == a || c == b)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}