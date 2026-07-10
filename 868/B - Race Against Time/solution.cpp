#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
 
    h %= 12;
    t1 %= 12;
    t2 %= 12;
 
    // Full clock = 43200 units
    long long hourHand = h * 3600 + m * 60 + s;
    long long minuteHand = m * 720 + s * 12;
    long long secondHand = s * 720;
 
    long long start = t1 * 3600;
    long long finish = t2 * 3600;
 
    if (start > finish) {
        swap(start, finish);
    }
 
    bool hourInside =
        (start < hourHand && hourHand < finish);
 
    bool minuteInside =
        (start < minuteHand && minuteHand < finish);
 
    bool secondInside =
        (start < secondHand && secondHand < finish);
 
    if (hourInside == minuteInside &&
        minuteInside == secondInside) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
 
    return 0;
}