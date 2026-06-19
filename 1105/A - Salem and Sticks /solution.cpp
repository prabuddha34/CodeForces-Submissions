#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[1000];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int bestT = 1;
    int bestCost = INT_MAX;
 
    for (int t = 1; t <= 100; t++) {
        int cost = 0;
 
        for (int i = 0; i < n; i++) {
            int diff = abs(a[i] - t);
 
            if (diff > 1) {
                cost += diff - 1;
            }
        }
 
        if (cost < bestCost) {
            bestCost = cost;
            bestT = t;
        }
    }
 
    cout << bestT << " " << bestCost << endl;
 
    return 0;
}