#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string p;
    cin >> p;
 
    const int MOD = 1000003;
 
    long long ans = 0;
 
    for(char c : p) {
        int val;
 
        if(c == '>') val = 8;
        else if(c == '<') val = 9;
        else if(c == '+') val = 10;
        else if(c == '-') val = 11;
        else if(c == '.') val = 12;
        else if(c == ',') val = 13;
        else if(c == '[') val = 14;
        else val = 15; // ]
 
        ans = (ans * 16 + val) % MOD;
    }
 
    cout << ans << endl;
 
    return 0;
}