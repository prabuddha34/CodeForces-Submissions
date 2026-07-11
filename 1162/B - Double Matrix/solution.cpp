#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int size=n*m;
    vector<long long> a(size), b(size);
    for (int i=0;i<size;i++) {
        cin>>a[i];
    }
    for (int i=0;i<size;i++) {
        cin>>b[i];
    }
    for (int i=0;i<size;i++) {
        if (a[i]>b[i]) {
            swap(a[i],b[i]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (i % m != m - 1) {
            if (a[i] >= a[i + 1] || b[i] >= b[i + 1]) {
                cout << "Impossible
";
                return 0;
            }
        }
        if (i + m < size) {
            if (a[i] >= a[i + m] || b[i] >= b[i + m]) {
                cout << "Impossible
";
                return 0;
            }
        }
    }
  cout << "Possible
";
    return 0;
}