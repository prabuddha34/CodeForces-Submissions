#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    queue<int> q1, q2;
 
    int k1;
    cin >> k1;
    for (int i = 0; i < k1; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }
 
    int k2;
    cin >> k2;
    for (int i = 0; i < k2; i++) {
        int x;
        cin >> x;
        q2.push(x);
    }
 
    int fightscountinglol = 0;
 
    while (!q1.empty() && !q2.empty()) {
        if (fightscountinglol > 1000000) {
            cout << -1 << endl;
            return 0;
        }
 
        int a = q1.front();
        int b = q2.front();
 
        q1.pop();
        q2.pop();
 
        if (a > b) {
            q1.push(b);
            q1.push(a);
        } else {
            q2.push(a);
            q2.push(b);
        }
 
        fightscountinglol++;
    }
 
    if (q1.empty())
        cout << fightscountinglol << " " << 2 << endl;
    else
        cout << fightscountinglol << " " << 1 << endl;
 
    return 0;
}