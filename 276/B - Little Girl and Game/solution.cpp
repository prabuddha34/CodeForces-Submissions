#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<int> freq(26, 0);
 
    for (char ch : s) {
        freq[ch - 'a']++;
    }
 
    int odd = 0;
    for (int x : freq) {
        if (x % 2 == 1) odd++;
    }
 
    if (odd <= 1) {
        cout << "First
";
    }
    else if (odd % 2 == 1) {
        cout << "First
";
    }
    else {
        cout << "Second
";
    }
 
    return 0;
}