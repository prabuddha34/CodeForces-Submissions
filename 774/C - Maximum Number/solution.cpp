#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n % 2 == 1) {
        cout << 7;
        n -= 3;
    }
 
    while (n > 0) {
        cout << 1;
        n -= 2;
    }
 
    cout << endl;
 
    return 0;
}