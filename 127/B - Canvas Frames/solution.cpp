#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int freq[101] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    int pairs = 0;
 
    for (int i = 1; i <= 100; i++) {
        pairs += freq[i] / 2;
    }
 
    cout << pairs / 2 << endl;
 
    return 0;
}