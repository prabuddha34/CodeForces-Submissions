#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    bool found = false;
 
    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= c; j++) {
            if (a * i + b * j == c) {
                found = true;
            }
        }
    }
 
    if (found)
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}