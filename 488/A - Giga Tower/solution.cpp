#include <bits/stdc++.h>
using namespace std;
 
bool hasEights(int x) {
    x=abs(x);
    while (x > 0) {
        if (x % 10 == 8) {
            return true;
        }
        x /= 10;
    }
 
    return false;
}
int main() {
    int a;
    cin>>a;
    int b=1;
    while (true) {
        if (hasEights(a + b)) {
            cout << b << endl;
            return 0;
        }
 
        b++;
    }
 
    return 0;
}