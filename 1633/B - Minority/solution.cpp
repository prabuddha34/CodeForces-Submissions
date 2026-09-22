#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int zeros = 0, ones = 0;
 
        for (char c : s) {
            if (c == '0')
                zeros++;
            else
                ones++;
        }
 
        if (zeros != ones) {
            cout << min(zeros, ones) << endl;
        }
        else {
            cout << max(0, zeros - 1) << endl;
        }
    }
 
    return 0;
}