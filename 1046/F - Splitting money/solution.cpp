#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<long long> a(N);
    for (long long &x : a) cin >> x;
 
    long long x, f;
    cin >> x >> f;
 
    long long transactions = 0;
 
    for (long long money : a) {
        if (money > x) {
            transactions += (money - x + x + f - 1) / (x + f);
        }
    }
 
    cout << transactions * f << '
';
}