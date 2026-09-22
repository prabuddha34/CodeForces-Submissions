#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
      string s;
        cin >> s;
        bool r=false,g=false,b=false;
        bool ok=true;
        for (char c : s) {
            if (c=='r') {
                r=true;
            }
            else if (c == 'g')
                g = true;
 
            else if (c == 'b')
                b = true;
 
            else if (c == 'R' && !r)
                ok = false;
 
            else if (c == 'G' && !g)
                ok = false;
 
            else if (c == 'B' && !b)
                ok = false;
 
        }
        if (ok) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
    }
 
    return 0;
}