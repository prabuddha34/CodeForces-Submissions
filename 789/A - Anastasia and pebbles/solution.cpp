#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long k;
    cin >> n >> k;
 
    long long pockets = 0;
 
    for (int i = 0; i < n; i++) {
        long long w;
        cin >> w;
 
        pockets += (w + k - 1) / k;
    }
 
    cout << (pockets + 1) / 2 << endl;
 
    return 0;
}