#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, s, t;
    cin >> n >> s >> t;
 
    vector<int> p(n + 1);
 
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
    }
 
    vector<bool> visited(n + 1, false);
 
    int pos = s;
    int steps = 0;
 
    while(!visited[pos]) {
        if(pos == t) {
            cout << steps << endl;
            return 0;
        }
 
        visited[pos] = true;
        pos = p[pos];
        steps++;
    }
 
    cout << -1 << endl;
 
    return 0;
}