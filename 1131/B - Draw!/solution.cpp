#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    long long prevA = 0, prevB = 0;
    long long answer = 1; // Starting score 0:0
 
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
 
        long long low = max(prevA, prevB);
        long long high = min(a, b);
 
        if (high >= low) {
            answer += high - low + 1;
 
            // Previous draw was already counted
            if (prevA == prevB)
                answer--;
        }
 
        prevA = a;
        prevB = b;
    }
 
    cout << answer << '
';
}