#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> x(n);
 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    sort(x.begin(), x.end());
 
    vector<int> piles;
 
    for (int i = 0; i < n; i++) {
        bool placed = false;
 
        for (int j = 0; j < piles.size(); j++) {
            if (x[i] >= piles[j]) {
                piles[j]++;
                placed = true;
                break;
            }
        }
 
        if (!placed) {
            piles.push_back(1);
        }
    }
 
    cout << piles.size() << endl;
 
    return 0;
}