#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string a;
    cin >> n >> a;
 
    vector<int> f(10);
    for (int i = 1; i <= 9; i++) cin >> f[i];
 
    bool started = false;
 
    for (int i = 0; i < n; i++) {
        int d = a[i] - '0';
 
        if (!started) {
            if (f[d] > d) {
                started = true;
                a[i] = char(f[d] + '0');
            }
        } else {
            if (f[d] >= d) {
                a[i] = char(f[d] + '0');
            } else {
                break;
            }
        }
    }
 
    cout << a << endl;
 
    return 0;
}