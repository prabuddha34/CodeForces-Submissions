#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    int k;
    cin >> n >> k;
 
    int zero = 0;
    int deleted = 0;
 
    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] == '0') {
            zero++;
 
            if (zero == k) {
                cout << deleted << endl;
                return 0;
            }
        } else {
            deleted++;
        }
    }
 
    cout << (int)n.size() - 1 << endl;
 
    return 0;
}