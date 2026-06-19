#include <bits/stdc++.h>
using namespace std;
 
int digitSum(long long n) {
    int sum = 0;
 
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
 
    return sum;
}
 
int main() {
    int k;
    cin >> k;
 
    int cnt = 0;
    long long num = 1;
 
    while (true) {
        if (digitSum(num) == 10) {
            cnt++;
 
            if (cnt == k) {
                cout << num << endl;
                break;
            }
        }
 
        num++;
    }
 
    return 0;
}