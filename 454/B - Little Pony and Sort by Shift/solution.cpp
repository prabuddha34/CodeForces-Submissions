#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int breaks=0;
    int pos=-1;
    for (int i = 0; i < n; i++) {
        int next = (i + 1) % n;
 
        if (a[i] > a[next]) {
            breaks++;
            pos = i;
        }
    }
 
    if (breaks == 0) {
        cout << 0 << endl;
    }
    else if (breaks == 1) {
        cout << n - pos - 1 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}