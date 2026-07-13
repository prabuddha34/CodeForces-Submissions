#include <bits/stdc++.h>
using namespace std;
 
struct Driver {
    int points = 0;
    vector<int> pos;
 
    Driver() {
        pos.assign(55, 0);
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    map<string, Driver> mp;
 
    int score[10] = {25,18,15,12,10,8,6,4,2,1};
 
    while (t--) {
        int n;
        cin >> n;
 
        for (int i = 1; i <= n; i++) {
            string name;
            cin >> name;
 
            mp[name].pos[i]++;
 
            if (i <= 10)
                mp[name].points += score[i - 1];
        }
    }
 
    string champion1 = "";
    string champion2 = "";
 
    for (auto &it : mp) {
        string name = it.first;
 
        if (champion1 == "") {
            champion1 = name;
        } else {
            Driver &a = mp[name];
            Driver &b = mp[champion1];
 
            if (a.points > b.points)
                champion1 = name;
            else if (a.points == b.points) {
                for (int i = 1; i <= 50; i++) {
                    if (a.pos[i] != b.pos[i]) {
                        if (a.pos[i] > b.pos[i])
                            champion1 = name;
                        break;
                    }
                }
            }
        }
 
        if (champion2 == "") {
            champion2 = name;
        } else {
            Driver &a = mp[name];
            Driver &b = mp[champion2];
 
            if (a.pos[1] > b.pos[1])
                champion2 = name;
            else if (a.pos[1] == b.pos[1]) {
 
                if (a.points > b.points)
                    champion2 = name;
                else if (a.points == b.points) {
                    for (int i = 2; i <= 50; i++) {
                        if (a.pos[i] != b.pos[i]) {
                            if (a.pos[i] > b.pos[i])
                                champion2 = name;
                            break;
                        }
                    }
                }
            }
        }
    }
 
    cout << champion1 << '
';
    cout << champion2 << '
';
 
    return 0;
}