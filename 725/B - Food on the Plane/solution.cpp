#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    char seat = s.back();
    s.pop_back();
 
    long long n = stoll(s);
 
    long long block = (n - 1) / 4;
    long long ans = block * 16;
 
    int rem = n % 4;
 
    if (rem == 2 || rem == 0) {
        ans += 7;
    }
 
    if (seat == 'f') ans += 1;
    else if (seat == 'e') ans += 2;
    else if (seat == 'd') ans += 3;
    else if (seat == 'a') ans += 4;
    else if (seat == 'b') ans += 5;
    else if (seat == 'c') ans += 6;
 
    cout << ans << endl;
 
    return 0;
}