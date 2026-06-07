#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    int cnt = 0;
 
    while (n.size() > 1) {
        long long sum = 0;
 
        for (char c : n) {
            sum += c - '0';
        }
 
        n = to_string(sum);
        cnt++;
    }
 
    cout << cnt << '
';
 
    return 0;
}