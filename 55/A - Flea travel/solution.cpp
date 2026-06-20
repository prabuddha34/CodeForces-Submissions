#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> visited(n, 0);
 
    int pos = 0;
 
    for (int k = 1; k <= 100000; k++) {
        visited[pos] = 1;
        pos = (pos + k) % n;
    }
 
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}