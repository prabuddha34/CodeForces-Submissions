#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int count100 = 0;
    int count200 = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if (x == 100) count100++;
        else count200++;
    }
 
    int total = count100 * 100 + count200 * 200;
 
    if (total % 200 != 0) {
        cout << "NO" << endl;
    }
    else if (count100 == 0 && count200 % 2 == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
 
    return 0;
}