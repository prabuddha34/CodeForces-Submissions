#include <bits/stdc++.h>
using namespace std;
 
bool leap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}
 
int monthDays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 
long long getDays(int y, int m, int d) {
    long long days = 0;
 
    for (int i = 1900; i < y; i++)
        days += leap(i) ? 366 : 365;
 
    for (int i = 1; i < m; i++) {
        days += monthDays[i];
        if (i == 2 && leap(y)) days++;
    }
 
    days += d;
    return days;
}
 
int main() {
    int y1, m1, d1, y2, m2, d2;
    char c;
 
    cin >> y1 >> c >> m1 >> c >> d1;
    cin >> y2 >> c >> m2 >> c >> d2;
 
    cout << abs(getDays(y1, m1, d1) - getDays(y2, m2, d2)) << endl;
 
    return 0;
}