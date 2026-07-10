#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
 
    long long ab =
        (ax - bx) * (ax - bx) +
        (ay - by) * (ay - by);
 
    long long bc =
        (bx - cx) * (bx - cx) +
        (by - cy) * (by - cy);
 
 
    long long cross =
        (bx - ax) * (cy - ay) -
        (by - ay) * (cx - ax);
 
    if (ab == bc && cross != 0) {
        cout << "Yes
";
    } else {
        cout << "No
";
    }
 
    return 0;
}