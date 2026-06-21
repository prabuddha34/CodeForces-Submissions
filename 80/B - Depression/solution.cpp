#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string t;
    cin >> t;
 
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
 
    h %= 12;
 
    double hour_angle = 30.0 * h + 0.5 * m;
    double minute_angle = 6.0 * m;
 
    cout << hour_angle << " " << minute_angle << '
';
 
    return 0;
}