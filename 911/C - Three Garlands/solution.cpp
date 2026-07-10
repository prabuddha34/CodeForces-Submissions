#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> k(3);
 
    cin >> k[0] >> k[1] >> k[2];
 
    sort(k.begin(), k.end());
 
    bool possible = false;
 
    if (k[0] == 1) {
        possible = true;
    }
    else if (k[0] == 2 && k[1] == 2) {
        possible = true;
    }
    else if (k[0] == 2 && k[1] == 4 && k[2] == 4) {
        possible = true;
    }
    else if (k[0] == 3 && k[1] == 3 && k[2] == 3) {
        possible = true;
    }
 
    cout << (possible ? "YES
" : "NO
");
 
    return 0;
}