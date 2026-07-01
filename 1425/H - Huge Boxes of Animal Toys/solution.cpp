#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;
 
        bool negative = (A + B) % 2 == 1;
 
        bool canBig = (A + D > 0);   
        bool canSmall = (B + C > 0); 
 
        string ans[4] = {"Tidak", "Tidak", "Tidak", "Tidak"};
 
        if (negative) {
            if (canBig) ans[0] = "Ya";    
            if (canSmall) ans[1] = "Ya";  
        } else {
            if (canSmall) ans[2] = "Ya";  
            if (canBig) ans[3] = "Ya";   
        }
 
        cout << ans[0] << " " << ans[1] << " "
             << ans[2] << " " << ans[3] << "
";
    }
 
    return 0;
}