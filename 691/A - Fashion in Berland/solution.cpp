#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            cnt++;
    }
 
    if (n == 1) {
        if (a[0] == 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
    else {
        if (cnt == 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}