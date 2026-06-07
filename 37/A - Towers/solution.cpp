#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int freq[1001] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    int towers = 0;
    int height = 0;
 
    for (int i = 1; i <= 1000; i++) {
        if (freq[i] > 0) {
            towers++;
            height = max(height, freq[i]);
        }
    }
 
    cout << height << " " << towers << endl;
 
    return 0;
}