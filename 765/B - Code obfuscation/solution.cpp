#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool seen[26] = {false};
    char need = 'a';
 
    for (int i = 0; i < s.size(); i++) {
        int id = s[i] - 'a';
 
        if (!seen[id]) {
            if (s[i] != need) {
                cout << "NO" << endl;
                return 0;
            }
 
            seen[id] = true;
            need++;
        }
    }
 
    cout << "YES" << endl;
 
    return 0;
}