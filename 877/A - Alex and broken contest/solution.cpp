#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string names[] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
 
    string s;
    cin >> s;
 
    int cnt = 0;
 
    for (int i = 0; i < 5; i++) {
        string t = names[i];
 
        for (int j = 0; j + t.length() <= s.length(); j++) {
            if (s.substr(j, t.length()) == t) {
                cnt++;
            }
        }
    }
 
    if (cnt == 1)
        cout << "YES
";
    else
        cout << "NO
";
 
    return 0;
}