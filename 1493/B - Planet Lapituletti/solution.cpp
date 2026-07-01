#include <bits/stdc++.h>
using namespace std;
int mp[10];
int mirrorNum(int x) {
    int a=x/10;
    int b=x%10;
    if (mp[a] == -1 || mp[b] == -1) return -1;
    return mp[b] * 10 + mp[a];
}
bool valid(int hour, int minute, int h, int m) {
    int mirroredHour = mirrorNum(minute);
    int mirroredMinute = mirrorNum(hour);
 
    return mirroredHour >= 0 &&
           mirroredMinute >= 0 &&
           mirroredHour < h &&
           mirroredMinute < m;
}
 
int main() {
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 5;
    mp[3] = -1;
    mp[4] = -1;
    mp[5] = 2;
    mp[6] = -1;
    mp[7] = -1;
    mp[8] = 8;
    mp[9] = -1;
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
 
        string s;
        cin >> s;
        int hour=stoi(s.substr(0,2));
        int minute=stoi(s.substr(3,2));
 
        while (!valid(hour, minute, h, m)) {
            minute++;
 
            if (minute == m) {
                minute = 0;
                hour++;
            }
 
            if (hour == h) {
                hour = 0;
            }
        }
 
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << "
";
 
    }
    return 0;
}