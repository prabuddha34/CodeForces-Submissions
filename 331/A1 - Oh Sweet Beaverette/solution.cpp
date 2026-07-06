#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    long long bestSum = LLONG_MIN;
    int bestL = -1, bestR = -1;
 
    for (int l = 1; l <= n; l++) {
        long long sum = a[l];
 
        for (int r = l + 1; r <= n; r++) {
            if (a[r] > 0) {
                sum += a[r];
            }
 
            if (a[l] == a[r]) {
                long long current = sum;
 
                if (a[r] <= 0) {
                    current += a[r];
                }
 
                if (current > bestSum) {
                    bestSum = current;
                    bestL = l;
                    bestR = r;
                }
            }
        }
    }
 
    vector<int> cut;
 
    for (int i = 1; i <= n; i++) {
        if (i < bestL || i > bestR) {
            cut.push_back(i);
        } 
        else if (i != bestL && i != bestR && a[i] < 0) {
            cut.push_back(i);
        }
    }
 
    cout << bestSum << " " << cut.size() << endl;
 
    for (int x : cut) {
        cout << x << " ";
    }
 
    return 0;
}