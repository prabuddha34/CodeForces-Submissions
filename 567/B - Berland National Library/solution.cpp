#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<int> inside;
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        char sign;
        int id;
        cin >> sign >> id;
 
        if (sign == '+') {
            inside.insert(id);
        } 
        else {
            if (inside.count(id)) {
                inside.erase(id);
            } 
            else {
                // He was inside before system started
                ans++;
            }
        }
 
        ans = max(ans, (int)inside.size());
    }
 
    cout << ans << '
';
 
    return 0;
}