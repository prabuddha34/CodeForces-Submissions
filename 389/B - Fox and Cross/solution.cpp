#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<string> grid(n);
 
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            if (grid[i][j] == '#') {
                
                if (i + 2 >= n || j - 1 < 0 || j + 1 >= n) {
                    cout << "NO";
                    return 0;
                }
 
                if (grid[i + 1][j] == '#' &&
                    grid[i + 1][j - 1] == '#' &&
                    grid[i + 1][j + 1] == '#' &&
                    grid[i + 2][j] == '#') {
                    
                    grid[i][j] = '.';
                    grid[i + 1][j] = '.';
                    grid[i + 1][j - 1] = '.';
                    grid[i + 1][j + 1] = '.';
                    grid[i + 2][j] = '.';
 
                } else {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
 
    cout << "YES";
    return 0;
}