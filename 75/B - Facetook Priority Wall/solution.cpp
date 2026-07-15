#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string me;
    cin >> me;
 
    int n;
    cin >> n;
    cin.ignore();
 
    map<string, int> score;
    set<string> names;
 
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
 
        stringstream ss(line);
 
        string x, action, word, y;
        ss >> x >> action;
 
        int points;
 
        if (action == "posted") {
            points = 15;
            ss >> word >> y;       // on name's
        }
        else if (action == "commented") {
            points = 10;
            ss >> word >> y;       // on name's
        }
        else {
            points = 5;
            ss >> y;               
        }
        y.pop_back();
        y.pop_back();
 
        names.insert(x);
        names.insert(y);
 
        if (x == me) {
            score[y] += points;
        }
        else if (y == me) {
            score[x] += points;
        }
    }
 
    vector<string> ans;
 
    for (string name : names) {
        if (name != me) {
            ans.push_back(name);
        }
    }
 
    sort(ans.begin(), ans.end(), [&](string a, string b) {
        if (score[a] != score[b]) {
            return score[a] > score[b];
        }
 
        return a < b;
    });
 
    for (string name : ans) {
        cout << name << '
';
    }
 
    return 0;
}