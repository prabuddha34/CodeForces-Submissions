#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    int k;
    cin >> a >> k;
 
    int n = a.size();
 
    for (int i = 0; i < n && k > 0; i++) {
        int best = i;
 
        for (int j = i + 1; j < n && j - i <= k; j++) {
            if (a[j] > a[best]) {
                best = j;
            }
        }
 
        for (int j = best; j > i; j--) {
            swap(a[j], a[j - 1]);
        }
 
        k -= best - i;
    }
 
    cout << a << endl;
    return 0;
}