#include <bits/stdc++.h>
using namespace std;
 
int diff(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] != b[i]) cnt++;
    }
    return cnt;
}
 
string makeTime(int h, int m) {
    string s = "";
 
    if (h < 10) s += '0';
    s += to_string(h);
 
    s += ":";
 
    if (m < 10) s += '0';
    s += to_string(m);
 
    return s;
}
 
int main() {
    int format;
    string s;
    cin >> format >> s;
 
    string ans;
    int best = 10;
 
    int startHour = (format == 12 ? 1 : 0);
    int endHour = (format == 12 ? 12 : 23);
 
    for (int h = startHour; h <= endHour; h++) {
        for (int m = 0; m <= 59; m++) {
            string cur = makeTime(h, m);
 
            int changes = diff(s, cur);
 
            if (changes < best) {
                best = changes;
                ans = cur;
            }
        }
    }
 
    cout << ans << endl;
    return 0;
}