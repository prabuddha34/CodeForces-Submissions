#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> x(n), y(n);
 
    long long sumX = 0, sumY = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sumX += x[i];
    }
 
    for (int i = 0; i < n; i++) {
        cin >> y[i];
        sumY += y[i];
    }
 
    if (sumX >= sumY)
        cout << "Yes";
    else
        cout << "No";
 
    cout << endl;
 
    return 0;
}