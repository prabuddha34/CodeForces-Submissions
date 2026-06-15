#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    string a[5] = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
    };
 
    long long block = 1;
 
    while (n > 5 * block) {
        n -= 5 * block;
        block *= 2;
    }
 
    cout << a[(n - 1) / block] << endl;
 
    return 0;
}