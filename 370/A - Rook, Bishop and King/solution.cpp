#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
 
    int rook, bishop, king;
 
    if (r1 == r2 || c1 == c2)
        rook = 1;
    else
        rook = 2;
 
    if ((r1 + c1) % 2 != (r2 + c2) % 2)
        bishop = 0;
    else if (abs(r1 - r2) == abs(c1 - c2))
        bishop = 1;
    else
        bishop = 2;
 
    king = max(abs(r1 - r2), abs(c1 - c2));
 
    cout << rook << " " << bishop << " " << king << endl;
 
    return 0;
}