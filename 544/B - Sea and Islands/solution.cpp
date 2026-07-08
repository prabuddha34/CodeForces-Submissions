#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int maxIslands= (n * n + 1) / 2;
    if (k > maxIslands) {
        cout << "NO
";
        return 0;
    }
   cout<<"YES
";
    vector<string> grid(n, string(n, 'S'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            if (k == 0)
                break;
 
            if ((i + j) % 2 == 0) {
                grid[i][j] = 'L';
                k--;
            }
        }
 
        if (k == 0)
            break;
    }
    for (int i = 0; i < n; i++) {
        cout << grid[i] << '
';
    }
 
    return 0;
}