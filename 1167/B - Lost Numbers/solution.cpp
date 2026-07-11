#include <bits/stdc++.h>
using namespace std;
int main() {
   vector<int>p ={4, 8, 15, 16, 23, 42};
    vector<int>product(4);
    for (int i = 0; i < 4; i++) {
        cout << "? " << i + 1 << " " << i + 2 << endl;
        cin >> product[i];
    }
    do {
        bool ok = true;
 
        for (int i = 0; i < 4; i++) {
            if (p[i] * p[i + 1] != product[i]) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            cout << "! ";
            for (int x : p)
                cout << x << " ";
            cout << endl;
            return 0;
        }
    }while (next_permutation(p.begin(), p.end()));
 
    return 0;
}