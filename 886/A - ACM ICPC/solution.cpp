#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[6];
 
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {
 
                int sum1 = a[i] + a[j] + a[k];
                int sum2 = 0;
 
                for (int p = 0; p < 6; p++) {
                    if (p != i && p != j && p != k) {
                        sum2 += a[p];
                    }
                }
 
                if (sum1 == sum2) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
 
    cout << "NO";
    return 0;
}