#include <bits/stdc++.h>
using namespace std;
bool knightAttack(int x1,int x2,int y1,int y2) {
    int dx=abs(x1-y1);
    int dy=abs(x2-y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}
int main() {
    string r, k;
    cin >> r >> k;
    int rx = r[0] - 'a' + 1;
    int ry = r[1] - '0';
 
    int kx = k[0] - 'a' + 1;
    int ky = k[1] - '0';
 
    int ans = 0;
 
 
    for(int x = 1; x <= 8; x++) {
        for(int y = 1; y <= 8; y++) {
 
            if(x == rx && y == ry) continue;
            if(x == kx && y == ky) continue;
 
            if(x == rx || y == ry) continue;
 
            if(knightAttack(x, y, rx, ry)) continue;
            if(knightAttack(x, y, kx, ky)) continue;
 
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}