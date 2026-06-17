#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k;
    string q;
 
    cin >> k >> q;
 
    vector<int> pos;
    bool used[26] = {false};
 
    for (int i = 0; i < q.size(); i++) {
        int ch = q[i] - 'a';
 
        if (!used[ch]) {
            used[ch] = true;
            pos.push_back(i);
 
            if (pos.size() == k) break;
        }
    }
 
    if (pos.size() < k) {
        cout << "NO" << endl;
        return 0;
    }
 
    cout << "YES" << endl;
 
    for (int i = 0; i < k; i++) {
        int start = pos[i];
        int end;
 
        if (i == k - 1) {
            end = q.size();
        } else {
            end = pos[i + 1];
        }
 
        cout << q.substr(start, end - start) << endl;
    }
 
    return 0;
}