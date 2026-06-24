#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
  int n;
    cin >> n;
 int x,y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr<=x) {
            cnt++;
        }
    }
    if (x > y) {
        cout << n << endl;
    } else {
        cout << (cnt + 1) / 2 << endl;
    }
	
    return 0;
}