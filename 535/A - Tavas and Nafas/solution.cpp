#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string one[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
 
    string ten[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };
 
    if (n < 20) {
        cout << one[n];
    } else {
        int t = n / 10;
        int o = n % 10;
 
        if (o == 0)
            cout << ten[t];
        else
            cout << ten[t] << "-" << one[o];
    }
 
    return 0;
}