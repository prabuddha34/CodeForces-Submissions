#include <bits/stdc++.h>
using namespace std;
 
struct Student {
    string name;
    int score;
};
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<Student>> region(m + 1);
 
    for (int i = 0; i < n; i++) {
        string name;
        int r, score;
        cin >> name >> r >> score;
 
        region[r].push_back({name, score});
    }
 
    for (int i = 1; i <= m; i++) {
 
        sort(region[i].begin(), region[i].end(), [](Student a, Student b) {
            return a.score > b.score;
        });
 
        if (region[i].size() > 2 &&
            region[i][1].score == region[i][2].score) {
 
            cout << "?
";
        } else {
 
            cout << region[i][0].name << " "
                 << region[i][1].name << '
';
        }
    }
 
    return 0;
}