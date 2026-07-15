#include <bits/stdc++.h>
using namespace std;
 
long long convert(string s, int base) {
    long long number = 0;
 
    for (char c : s) {
        int digit = c - '0';
        number = number * base + digit;
    }
 
    return number;
}
 
int main() {
    string a, b;
    cin >> a >> b;
 
    int largestDigit = 0;
 
    for (char c : a) {
        largestDigit = max(largestDigit, c - '0');
    }
 
    for (char c : b) {
        largestDigit = max(largestDigit, c - '0');
    }
 
    int base = largestDigit + 1;
 
    long long sum = convert(a, base) + convert(b, base);
 
    int len = 0;
 
    while (sum > 0) {
        sum = sum / base;
        len++;
    }
 
    cout << len << '
';
 
    return 0;
}