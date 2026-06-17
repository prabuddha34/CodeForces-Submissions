#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    char pos[4];
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '!')
            pos[i % 4] = s[i];
    }
 
    int r = 0, b = 0, y = 0, g = 0;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '!') {
            if (pos[i % 4] == 'R') r++;
            else if (pos[i % 4] == 'B') b++;
            else if (pos[i % 4] == 'Y') y++;
            else g++;
        }
    }
 
    cout << r << " " << b << " " << y << " " << g << endl;
}