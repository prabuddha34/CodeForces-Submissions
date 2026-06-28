#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> freq(101, 0);
    int sum = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        sum += x;
    }
 
    int ans = sum;
 
    for (int a = 1; a <= 100; a++) {
        if (freq[a] == 0) continue;
 
        for (int d = 1; d <= a; d++) {
            if (a % d != 0) continue;
 
            for (int b = 1; b <= 100; b++) {
                if (freq[b] == 0) continue;
 
                // need two different machines if a == b
                if (a == b && freq[a] < 2) continue;
 
                int newSum = sum - a - b + (a / d) + (b * d);
                ans = min(ans, newSum);
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}