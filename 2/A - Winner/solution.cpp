#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<string, int>> rounds(n);
    map<string, int> finalScore;
 
    for (int i = 0; i < n; i++) {
        cin >> rounds[i].first >> rounds[i].second;
        finalScore[rounds[i].first] += rounds[i].second;
    }
 
    int mx = INT_MIN;
 
    for (auto x : finalScore) {
        mx = max(mx, x.second);
    }
 
    map<string, int> currentScore;
 
    for (auto round : rounds) {
        string name = round.first;
        int points = round.second;
 
        currentScore[name] += points;
 
        if (finalScore[name] == mx && currentScore[name] >= mx) {
            cout << name;
            return 0;
        }
    }
}