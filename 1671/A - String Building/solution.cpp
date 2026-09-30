#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        bool ok = true;
 
        for (int i = 0; i < s.size(); ) {
            int j = i;
 
            while (j < s.size() && s[j] == s[i])
                j++;
 
            if (j - i == 1)
                ok = false;
 
            i = j;
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
}