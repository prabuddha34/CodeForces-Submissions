#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(m);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
 
    int mxCorrect = *max_element(a.begin(), a.end());
    int mnCorrect = *min_element(a.begin(), a.end());
    int mnWrong = *min_element(b.begin(), b.end());
 
    int v = max(mxCorrect, 2 * mnCorrect);
 
    if (v < mnWrong) {
        cout << v << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}