#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    vector<int> pos(200001);
 
    int left = 0, right = -1;
 
    while (q--) {
        char type;
        int id;
        cin >> type >> id;
 
        if (type == 'L') {
            pos[id] = --left;
        }
        else if (type == 'R') {
            pos[id] = ++right;
        }
        else {
            int fromLeft = pos[id] - left;
            int fromRight = right - pos[id];
 
            cout << min(fromLeft, fromRight) << '
';
        }
    }
}