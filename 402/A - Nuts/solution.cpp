#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, a, b, v;
    cin >> k >> a >> b >> v;
 
    int boxes = 0;
 
    while (a > 0) {
        int dividers = min(b, k - 1);
        int sections = dividers + 1;
 
        a -= sections * v;
        b -= dividers;
 
        boxes++;
    }
 
    cout << boxes << endl;
 
    return 0;
}