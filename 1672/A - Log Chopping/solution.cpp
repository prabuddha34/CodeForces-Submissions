#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        int moves = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            moves += x - 1;
        }
 
        if (moves % 2)
            cout << "errorgorn
";
        else
            cout << "maomao90
";
    }
 
    return 0;
}