#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> len(4);
    string s;
 
    for (int i = 0; i < 4; i++) {
        cin >> s;
        len[i] = s.length() - 2; // Ignore "A.", "B.", etc.
    }
 
    int cnt = 0;
    char ans = 'C';
 
    for (int i = 0; i < 4; i++) {
        bool small = true, big = true;
 
        for (int j = 0; j < 4; j++) {
            if (i == j) continue;
 
            if (len[i] * 2 > len[j])
                small = false;
 
            if (len[i] < 2 * len[j])
                big = false;
        }
 
        if (small || big) {
            cnt++;
            ans = 'A' + i;
        }
    }
 
    if (cnt == 1)
        cout << ans;
    else
        cout << 'C';
 
    return 0;
}