#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int pos = n - 1;
 
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            pos = i;
            break;
        }
    }
 
    s.erase(pos, 1);
 
    cout << s << endl;
 
    return 0;
}