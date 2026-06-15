#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    pair<int, int> a[55];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
 
            if (a[j].first > a[i].first) {
                swap(a[i], a[j]);
            }
            else if (a[j].first == a[i].first &&
                     a[j].second < a[i].second) {
                swap(a[i], a[j]);
            }
        }
    }
 
    int p = a[k - 1].first;
    int t = a[k - 1].second;
 
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i].first == p && a[i].second == t) {
            count++;
        }
    }
 
    cout << count << endl;
 
    return 0;
}