#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string home, away;
    cin >> home >> away;
 
    int n;
    cin >> n;
 
    int yellow[2][100] = {};
    bool red[2][100] = {};
 
    for (int i = 0; i < n; i++) {
        int t, num;
        char team, card;
 
        cin >> t >> team >> num >> card;
 
        int id;
        if (team == 'h')
            id = 0;
        else
            id = 1;
 
        if (red[id][num]) {
            continue;
        }
 
        if (card == 'y') {
            yellow[id][num]++;
 
            if (yellow[id][num] == 2) {
                red[id][num] = true;
 
                if (id == 0)
                    cout << home << " " << num << " " << t << '
';
                else
                    cout << away << " " << num << " " << t << '
';
            }
        } 
        else {
            red[id][num] = true;
 
            if (id == 0)
                cout << home << " " << num << " " << t << '
';
            else
                cout << away << " " << num << " " << t << '
';
        }
    }
 
    return 0;
}