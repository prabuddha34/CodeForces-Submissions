#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    for (int start = 0; start < m; start++) {
        int ans = 0;
 
        for (int row = 1; row < n; row++) {
            int time = row;
            int col = start;
 
            // spider moving Left: started on right side
            if (col + time < m && a[row][col + time] == 'L') ans++;
 
            // spider moving Right: started on left side
            if (col - time >= 0 && a[row][col - time] == 'R') ans++;
 
            // spider moving Up: started below
            if (row + time < n && a[row + time][col] == 'U') ans++;
 
            // spider moving Down: started above
            if (row - time >= 0 && a[row - time][col] == 'D') ans++;
        }
 
        cout << ans << " ";
    }
 
    return 0;
}