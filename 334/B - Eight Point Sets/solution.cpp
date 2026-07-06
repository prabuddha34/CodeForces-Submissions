#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<pair<int,int>> p(8);
    set<int> xs, ys;
    set<pair<int,int>> points;
 
    for (int i = 0; i < 8; i++) {
        cin >> p[i].first >> p[i].second;
        xs.insert(p[i].first);
        ys.insert(p[i].second);
        points.insert(p[i]);
    }
 
    if (points.size() != 8 || xs.size() != 3 || ys.size() != 3) {
        cout << "ugly
";
        return 0;
    }
 
    vector<int> x(xs.begin(), xs.end());
    vector<int> y(ys.begin(), ys.end());
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) continue;
 
            if (!points.count({x[i], y[j]})) {
                cout << "ugly
";
                return 0;
            }
        }
    }
 
    if (points.count({x[1], y[1]})) {
        cout << "ugly
";
    } else {
        cout << "respectable
";
    }
 
    return 0;
}