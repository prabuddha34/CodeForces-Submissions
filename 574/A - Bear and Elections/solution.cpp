#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int candies = 0;
 
    while (true) {
        int mxIndex = 1;
 
        for (int i = 1; i < n; i++) {
            if (a[i] > a[mxIndex]) {
                mxIndex = i;
            }
        }
 
        if (a[0] > a[mxIndex]) {
            break;
        }
 
        a[0]++;
        a[mxIndex]--;
        candies++;
    }
 
    cout << candies << endl;
 
    return 0;
}