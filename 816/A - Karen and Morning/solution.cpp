#include <bits/stdc++.h>
using namespace std;
 
bool pal(int h, int m) {
    int h1 = h / 10;
    int h2 = h % 10;
    int m1 = m / 10;
    int m2 = m % 10;
 
    return (h1 == m2 && h2 == m1);
}
 
int main() {
    string s;
    cin >> s;
 
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');
 
    int cur = h * 60 + m;
 
    for (int ans = 0; ans <= 1440; ans++) {
        int hh = cur / 60;
        int mm = cur % 60;
 
        if (pal(hh, mm)) {
            cout << ans;
            return 0;
        }
 
        cur = (cur + 1) % 1440;
    }
 
    return 0;
}