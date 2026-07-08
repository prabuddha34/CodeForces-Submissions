#include <bits/stdc++.h>
using namespace std;
 
bool beautiful(string s) {
    if (s == "1") return true;
 
    if (s[0] != '1') return false;
 
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != '0') return false;
    }
 
    return true;
}
 
int main() {
    int n;
    cin >> n;
 
    string mainNum = "1";
    int zeroCount = 0;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        if (s == "0") {
            cout << 0 << endl;
            return 0;
        }
 
        if (beautiful(s)) {
            zeroCount += s.size() - 1;
        } else {
            mainNum = s;
        }
    }
 
    cout << mainNum;
 
    for (int i = 0; i < zeroCount; i++) {
        cout << 0;
    }
 
    cout << endl;
 
    return 0;
}