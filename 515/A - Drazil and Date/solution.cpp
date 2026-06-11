#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, s;
    cin >> a >> b >> s;
 
    long long d = abs(a) + abs(b);
 
    if (s >= d && (s - d) % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}