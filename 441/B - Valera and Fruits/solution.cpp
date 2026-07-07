#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, v;
    cin >> n >> v;
 
    vector<int> fruit(3005, 0);
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        fruit[a] += b;
    }
 
    int ans = 0;
 
    for (int day = 1; day <= 3001; day++) {
        int can = v;
 
     
        int take = min(can, fruit[day - 1]);
        ans += take;
        can -= take;
        fruit[day - 1] -= take;
 
        
        take = min(can, fruit[day]);
        ans += take;
        fruit[day] -= take;
    }
 
    cout << ans << endl;
    return 0;
}