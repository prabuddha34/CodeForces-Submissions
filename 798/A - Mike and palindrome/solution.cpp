#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int cnt = 0;
    int n = s.size();
 
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            cnt++;
    }
 
    if (cnt == 1)
        cout << "YES
";
    else if (cnt > 1)
        cout << "NO
";
    else { 
        if (n % 2 == 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}