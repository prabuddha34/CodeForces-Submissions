#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    int m;
    cin >> n >> m;
 
    vector<long long> d(m);
 
    for(int i = 0; i < m; i++) {
        cin >> d[i];
    }
 
    sort(d.begin(), d.end());
 
    if(m > 0 && (d[0] == 1 || d[m - 1] == n)) {
        cout << "NO";
        return 0;
    }
 
    for(int i = 0; i + 2 < m; i++) {
        if(d[i] + 1 == d[i + 1] && d[i + 1] + 1 == d[i + 2]) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
    return 0;
}