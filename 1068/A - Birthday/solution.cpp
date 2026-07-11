#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N, M, K, L;
    cin >> N >> M >> K >> L;
 
    long long x = (K + L + M - 1) / M;
 
    if (x * M > N)
        cout << -1;
    else
        cout << x;
 
    return 0;
}