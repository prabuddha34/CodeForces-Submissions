#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<long long> a(n);
    vector<long long> b(m);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
 
    long long answer = LLONG_MAX;
 
 
    for (int hide = 0; hide < n; hide++) {
 
        
        long long largestProduct = LLONG_MIN;
 
        for (int i = 0; i < n; i++) {
            if (i == hide) {
                continue;
            }
 
            for (int j = 0; j < m; j++) {
                long long product = a[i] * b[j];
                largestProduct = max(largestProduct, product);
            }
        }
 
        
        answer = min(answer, largestProduct);
    }
 
    cout << answer << '
';
 
    return 0;
}