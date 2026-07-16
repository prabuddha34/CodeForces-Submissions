#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long k;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n - 1 && k > 0; i++) {
        if (s[i] == '4' && s[i + 1] == '7') {
            if (i % 2 == 0) {
                s[i + 1] = '4';
                k--;
            }
            else {
                if (i > 0 && s[i - 1] == '4') {
                    if (k % 2 == 1)
                        s[i] = '7';
 
                    break;
                }
                s[i] = '7';
                k--;
            }
        }
    }
    cout << s;
}