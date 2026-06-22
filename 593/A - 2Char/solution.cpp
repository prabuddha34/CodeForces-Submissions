#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<string> words(n);
 
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
 
    int ans = 0;
 
    for (char x = 'a'; x <= 'z'; x++) {
        for (char y = 'a'; y <= 'z'; y++) {
            int total = 0;
 
            for (string word : words) {
                bool ok = true;
 
                for (char c : word) {
                    if (c != x && c != y) {
                        ok = false;
                        break;
                    }
                }
 
                if (ok) {
                    total += word.size();
                }
            }
 
            ans = max(ans, total);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}