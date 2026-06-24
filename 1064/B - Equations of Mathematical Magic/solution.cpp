#include <bits/stdc++.h>
using namespace std;
 
int type(char c) {
    if (isdigit(c)) return 0; // digit
    if (islower(c)) return 1; // lowercase
    return 2;                 // uppercase
}
 
int main() {
  int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int ones=__builtin_popcount(a);
        cout << (1LL << ones) << endl;
    }
 
    return 0;
}