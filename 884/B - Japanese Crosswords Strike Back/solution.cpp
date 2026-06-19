#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long x;
    cin >> n >> x;
 
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }
 
    long long need = sum + (n - 1);
 
    if (need == x) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}