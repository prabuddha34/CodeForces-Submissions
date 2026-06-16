#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int freq[1001] = {0};
 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    int mx = 0;
 
    for(int i = 1; i <= 1000; i++) {
        mx = max(mx, freq[i]);
    }
 
    if(mx <= (n + 1) / 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}