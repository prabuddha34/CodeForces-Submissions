#include <bits/stdc++.h>
using namespace std;
 
struct Team {
    int strength;
    int x, y;
};
 
int main() {
    int n;
    cin >> n;
 
    int total = 2 * n;
 
    vector<Team> teams;
 
    for (int i = 2; i <= total; i++) {
        for (int j = 1; j < i; j++) {
            int val;
            cin >> val;
 
            teams.push_back({val, i, j});
        }
    }
 
    sort(teams.begin(), teams.end(), [](Team a, Team b) {
        return a.strength > b.strength;
    });
 
    vector<int> partner(total + 1, 0);
 
    for (auto team : teams) {
        int x = team.x;
        int y = team.y;
 
        if (partner[x] == 0 && partner[y] == 0) {
            partner[x] = y;
            partner[y] = x;
        }
    }
 
    for (int i = 1; i <= total; i++) {
        cout << partner[i] << " ";
    }
 
    return 0;
}