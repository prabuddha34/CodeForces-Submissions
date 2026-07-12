#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> room(n);
 
    for (int i = 0; i < n; i++) {
        cin >> room[i];
    }
 
    // prefix[i][j] = number of occupied cells
    // in rectangle from (0, 0) to (i-1, j-1)
    int prefix[26][26] = {};
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] =
                prefix[i - 1][j] +
                prefix[i][j - 1] -
                prefix[i - 1][j - 1] +
                (room[i - 1][j - 1] == '1');
        }
    }
 
    int answer = 0;
 
    // Choose top-left and bottom-right corners
    for (int top = 1; top <= n; top++) {
        for (int left = 1; left <= m; left++) {
            for (int bottom = top; bottom <= n; bottom++) {
                for (int right = left; right <= m; right++) {
 
                    int occupied =
                        prefix[bottom][right]
                        - prefix[top - 1][right]
                        - prefix[bottom][left - 1]
                        + prefix[top - 1][left - 1];
 
                    if (occupied == 0) {
                        int height = bottom - top + 1;
                        int width = right - left + 1;
 
                        int perimeter = 2 * (height + width);
                        answer = max(answer, perimeter);
                    }
                }
            }
        }
    }
 
    cout << answer << '
';
 
    return 0;
}