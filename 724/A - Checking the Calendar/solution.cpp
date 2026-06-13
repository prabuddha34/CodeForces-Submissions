#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
 
    map<string, int> mp;
    mp["monday"] = 0;
    mp["tuesday"] = 1;
    mp["wednesday"] = 2;
    mp["thursday"] = 3;
    mp["friday"] = 4;
    mp["saturday"] = 5;
    mp["sunday"] = 6;
 
    int a = mp[s1];
    int b = mp[s2];
 
    int diff = (b - a + 7) % 7;
 
    if (diff == 0 || diff == 2 || diff == 3)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}