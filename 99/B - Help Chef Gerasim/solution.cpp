#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
    long long sum = 0;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    if (sum % n != 0) {
        cout << "Unrecoverable configuration.";
        return 0;
    }
 
    int avg = sum / n;
 
    int from = -1, to = -1;
    int less = 0, more = 0;
 
    for (int i = 1; i <= n; i++) {
        if (a[i] < avg) {
            less++;
            from = i;
        } else if (a[i] > avg) {
            more++;
            to = i;
        }
    }
 
    if (less == 0 && more == 0) {
        cout << "Exemplary pages.";
    } 
    else if (less == 1 && more == 1 && avg - a[from] == a[to] - avg) {
        int v = avg - a[from];
        cout << v << " ml. from cup #" << from << " to cup #" << to << ".";
    } 
    else {
        cout << "Unrecoverable configuration.";
    }
 
    return 0;
}