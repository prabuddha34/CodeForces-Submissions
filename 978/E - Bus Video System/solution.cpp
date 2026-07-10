#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long w;
    cin >> n >> w;
 
    long long sum = 0;
    long long minimum = 0;
    long long maximum = 0;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
 
        sum += x;
        minimum = min(minimum, sum);
        maximum = max(maximum, sum);
    }
 
    long long lowestStart = -minimum;
    long long highestStart = w - maximum;
 
    if (lowestStart > highestStart)
        cout << 0;
    else
        cout << highestStart - lowestStart + 1;
 
    return 0;
}