#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(2 * n + 1);
 
    for (int i = 1; i <= 2 * n; i++) {
        a[i] = i;
    }
 
    for (int i = 1; i <= k; i++) {
        swap(a[2 * i - 1], a[2 * i + 1]);
    }
 
    for (int i = 1; i <= 2 * n; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}