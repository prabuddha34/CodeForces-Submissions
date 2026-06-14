#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    char a[105][105];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    int found[26]={0};
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]==c) {
                for(int k=0;k<4;k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        char ch = a[ni][nj];
 
                        if (ch != '.' && ch != c) {
                            found[ch - 'A'] = 1;
                        }
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (found[i] == 1) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}