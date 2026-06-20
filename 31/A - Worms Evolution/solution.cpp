#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    bool flag = false;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
 
                if(i != j && j != k && i != k) {
                    if(a[i] + a[j] == a[k]) {
                        cout << k + 1 << " " << j + 1 << " " << i + 1 << endl;
                        flag = true;
                        return 0;
                    }
                }
 
            }
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}