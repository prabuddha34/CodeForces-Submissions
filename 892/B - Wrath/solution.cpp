#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> L(n + 1);
    vector<int> diff(n + 3, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> L[i];
 
        int left = max(1LL, i - L[i]);
        int right = i - 1;
 
        if (left <= right) {
            diff[left]++;
            diff[right + 1]--;
        }
    }
 
    int alive = 0;
    int killed = 0;
 
    for (int i = 1; i <= n; i++) {
        killed += diff[i];
 
        if (killed == 0) {
            alive++;
        }
    }
 
    cout << alive << endl;
 
    return 0;
}