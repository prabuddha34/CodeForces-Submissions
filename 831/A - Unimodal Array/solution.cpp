#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int state = 0;
 
    for (int i = 1; i < n; i++) {
        if (state == 0) {
            if (a[i] > a[i - 1]) continue;
            else if (a[i] == a[i - 1]) state = 1;
            else state = 2;
        }
        else if (state == 1) {
            if (a[i] == a[i - 1]) continue;
            else if (a[i] < a[i - 1]) state = 2;
            else {
                cout << "NO";
                return 0;
            }
        }
        else {
            if (a[i] < a[i - 1]) continue;
            else {
                cout << "NO";
                return 0;
            }
        }
    }
 
    cout << "YES";
    return 0;
}