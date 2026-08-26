#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long k, n, s, p;
    cin >> k >> n >> s >> p;
 
    long long sheets = k * ((n + s - 1) / s);
    cout << (sheets + p - 1) / p;
 
    return 0;
}