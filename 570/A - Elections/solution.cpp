#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,m;
    cin>>n>>m;
    int win[105]={0};
    for (int i=0;i<m;i++) {
        long long bestwinner=-1;
        int winner = 0;
        for (int j=0;j<n;j++) {
            long long votes;
            cin>>votes;
            if (votes>bestwinner) {
                bestwinner = votes;
                winner = j;
            }
        }
        win[winner]++;
    }
    int finalWinner = 0;
 
    for (int i = 1; i < n; i++) {
        if (win[i] > win[finalWinner]) {
            finalWinner = i;
        }
    }
 
    cout << finalWinner + 1 << endl;
    
    return 0;
}