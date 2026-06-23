#include <bits/stdc++.h>
using namespace std;
 
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u' || c == 'y';
}
 
int main() {
    int n;
    cin >> n;
 
    vector<int> p(n);
 
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    cin.ignore();
 
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
 
        int cnt = 0;
 
        for (char c : line) {
            if (isVowel(c)) {
                cnt++;
            }
        }
 
        if (cnt != p[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
 
    return 0;
}