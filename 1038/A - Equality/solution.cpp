#include <bits/stdc++.h>
using namespace std;
int numsGame(int N) {
    // code here
if (N%2 == 0)
    return 1;
    else
        return 0;
 
}
int countBitsFlip(int a, int b) {
    // code here
    int x=a^b;
    int cnt=0;
    while (x!=0) {
        cnt+=x&1;
        x>>=1;
    }
    return  cnt;
 
}
int nextPowerOfTwo(int n) {
    // code here
    if (n%2 == 0)
        return n/2;
    else
        return 0;
}
int main() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int cnt[26] = {};
 
    for (char c : s) {
        cnt[c - 'A']++;
    }
 
    int mn = INT_MAX;
 
    for (int i = 0; i < k; i++) {
        mn = min(mn, cnt[i]);
    }
 
    cout << mn * k << endl;
 
    return 0;
}