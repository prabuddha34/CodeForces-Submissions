#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int c25 = 0, c50 = 0;
 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if(x == 25) {
            c25++;
        }
        else if(x == 50) {
            if(c25 == 0) {
                cout << "NO";
                return 0;
            }
            c25--;
            c50++;
        }
        else {
            if(c50 > 0 && c25 > 0) {
                c50--;
                c25--;
            }
            else if(c25 >= 3) {
                c25 -= 3;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }
 
    cout << "YES";
    return 0;
}