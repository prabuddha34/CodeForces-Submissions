#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
 
    int need47 = 0;
    int need74 = 0;
 
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '4' && b[i] == '7') {
            need47++;
        }
        else if(a[i] == '7' && b[i] == '4') {
            need74++;
        }
    }
 
    cout << max(need47, need74) << endl;
 
    return 0;
}