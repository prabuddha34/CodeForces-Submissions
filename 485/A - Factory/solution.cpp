#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, m;
    cin >> a >> m;
 
    vector<int> seen(m, 0);
 
    while (true) {
        int rem = a % m;
 
        if (rem == 0) {
            cout << "Yes";
            return 0;
        }
 
        if (seen[rem]) {
            cout << "No";
            return 0;
        }
 
        seen[rem] = 1;
        a += rem;
    }
}