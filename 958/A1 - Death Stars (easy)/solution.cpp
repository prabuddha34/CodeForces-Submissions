#include <bits/stdc++.h>
using namespace std;
 
vector<string> rotate90(vector<string> a) {
    int n = a.size();
    vector<string> b(n, string(n, ' '));
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[j][n - 1 - i] = a[i][j];
 
    return b;
}
 
int main() {
    int n;
    cin >> n;
 
    vector<string> a(n), b(n);
 
    for (auto &row : a) cin >> row;
    for (auto &row : b) cin >> row;
 
    for (int flip = 0; flip < 2; flip++) {
        for (int rotation = 0; rotation < 4; rotation++) {
            if (a == b) {
                cout << "Yes
";
                return 0;
            }
 
            a = rotate90(a);
        }
 
    
        reverse(a.begin(), a.end());
    }
 
    cout << "No
";
}