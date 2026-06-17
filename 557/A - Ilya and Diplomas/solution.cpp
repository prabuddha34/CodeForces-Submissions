#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int min1, max1, min2, max2, min3, max3;
    cin >> min1 >> max1;
    cin >> min2 >> max2;
    cin >> min3 >> max3;
 
    int a = min1, b = min2, c = min3;
 
    int rem = n - (a + b + c);
 
    int add = min(rem, max1 - a);
    a += add;
    rem -= add;
 
    add = min(rem, max2 - b);
    b += add;
    rem -= add;
 
    c += rem;
 
    cout << a << " " << b << " " << c << endl;
 
    return 0;
}