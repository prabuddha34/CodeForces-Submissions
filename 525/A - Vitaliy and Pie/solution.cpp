#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int key[26] = {0};
    int buy = 0;
 
    for (int i = 0; i < s.size(); i += 2) {
        char k = s[i];       // key
        char d = s[i + 1];   // door
 
        key[k - 'a']++;
 
        int doorType = d - 'A';
 
        if (key[doorType] > 0) {
            key[doorType]--;
        } else {
            buy++;
        }
    }
 
    cout << buy << endl;
 
    return 0;
}