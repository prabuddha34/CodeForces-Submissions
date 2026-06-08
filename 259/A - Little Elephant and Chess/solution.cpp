#include <bits/stdc++.h>
using namespace std;
 
string shift(string s, int k) {
    return s.substr(k) + s.substr(0, k);
}
 
bool ok(string s, string target) {
    for (int i = 0; i < 8; i++) {
        if (shift(s, i) == target) return true;
    }
    return false;
}
 
int main() {
    vector<string> board(8);
 
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
 
    string p1 = "WBWBWBWB";
    string p2 = "BWBWBWBW";
 
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            if (!ok(board[i], p1)) {
                cout << "NO
";
                return 0;
            }
        } else {
            if (!ok(board[i], p2)) {
                cout << "NO
";
                return 0;
            }
        }
    }
 
    cout << "YES
";
 
    return 0;
}