#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int l = 1, r = n;
 
    while (l <= r) {
        cout << l << " ";
        l++;
 
        if (l <= r) {
            cout << r << " ";
            r--;
        }
    }
 
    return 0;
}