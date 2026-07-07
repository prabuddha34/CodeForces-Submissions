#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int bestStart = 1;
    int bestChanges = n + 1;
 
    
    for (int start = 1; start <= 1000; start++) {
        int changes = 0;
 
        for (int i = 1; i <= n; i++) {
            int need = start + (i - 1) * k;
 
            if (a[i] != need) {
                changes++;
            }
        }
 
        if (changes < bestChanges) {
            bestChanges = changes;
            bestStart = start;
        }
    }
 
    cout << bestChanges << endl;
 
    for (int i = 1; i <= n; i++) {
        int need = bestStart + (i - 1) * k;
 
        if (a[i] < need) {
            cout << "+ " << i << " " << need - a[i] << endl;
        } 
        else if (a[i] > need) {
            cout << "- " << i << " " << a[i] - need << endl;
        }
    }
 
    return 0;
}