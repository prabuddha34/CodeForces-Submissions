#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<int> s;
    int freq[101] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        freq[x]++;
    }
 
    if (s.size() == 2) {
        auto it = s.begin();
 
        int first = *it;
        it++;
        int second = *it;
 
        if (freq[first] == n / 2 && freq[second] == n / 2) {
            cout << "YES" << endl;
            cout << first << " " << second << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}