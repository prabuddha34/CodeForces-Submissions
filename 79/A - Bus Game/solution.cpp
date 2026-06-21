#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y;
    cin >> x >> y;
 
    bool cielTurn = true;
 
    while (true) {
        bool moved = false;
 
        if (cielTurn) {
            if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
                moved = true;
            } 
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
                moved = true;
            } 
            else if (y >= 22) {
                y -= 22;
                moved = true;
            }
        } 
        else {
            if (y >= 22) {
                y -= 22;
                moved = true;
            } 
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
                moved = true;
            } 
            else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
                moved = true;
            }
        }
 
        if (!moved) {
            if (cielTurn) cout << "Hanako";
            else cout << "Ciel";
            break;
        }
 
        cielTurn = !cielTurn;
    }
 
    return 0;
}