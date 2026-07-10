#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k, A, B;
 
    cin >> n;
    cin >> k;
    cin >> A;
    cin >> B;
 
    long long cost = 0;
    long long x = n;
 
    // Division by 1 does not reduce x
    if (k == 1) {
        cout << (n - 1) * A << '
';
        return 0;
    }
 
    while (x > 1) {
 
       
        if (x < k) {
            cost += (x - 1) * A;
            break;
        }
 
   
        long long remainder = x % k;
 
        if (remainder != 0) {
            cost += remainder * A;
            x -= remainder;
        }
 
        if (x == 1) {
            break;
        }
 
        long long afterDivision = x / k;
 
        long long divisionCost = B;
        long long subtractionCost = (x - afterDivision) * A;
 
        cost += min(divisionCost, subtractionCost);
 
        x = afterDivision;
    }
 
    cout << cost << '
';
 
    return 0;
}