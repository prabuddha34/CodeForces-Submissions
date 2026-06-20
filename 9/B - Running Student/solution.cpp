#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    double vb, vs;
    cin >> n >> vb >> vs;
 
    vector<double> x(n);
 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    double xu, yu;
    cin >> xu >> yu;
 
    int ans = 1;
    double bestTime = 1e18;
    double bestDist = 1e18;
 
    for (int i = 1; i < n; i++) {
        double busTime = x[i] / vb;
 
        double dist = sqrt((x[i] - xu) * (x[i] - xu) + yu * yu);
 
        double runTime = dist / vs;
 
        double totalTime = busTime + runTime;
 
        if (totalTime < bestTime) {
            bestTime = totalTime;
            bestDist = dist;
            ans = i;
        }
        else if (abs(totalTime - bestTime) < 1e-9 && dist < bestDist) {
            bestDist = dist;
            ans = i;
        }
    }
 
    cout << ans + 1 << endl;
 
    return 0;
}