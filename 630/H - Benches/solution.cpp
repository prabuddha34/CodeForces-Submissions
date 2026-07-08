#include <bits/stdc++.h>
using namespace std;
 
long long C5(long long n) {
    return n * (n - 1) * (n - 2) * (n - 3) * (n - 4) / 120;
}
 
int main() {
    long long n;
    cin >> n;
 
    long long ways = C5(n) * C5(n) * 120;
 
    cout << ways << endl;
 
    return 0;
}