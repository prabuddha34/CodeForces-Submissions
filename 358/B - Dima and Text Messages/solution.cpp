#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    string target = "";
 
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        target += "<3";
        target += word;
    }
    target += "<3";
 
    string msg;
    cin >> msg;
 
    int i = 0, j = 0;
 
    while (i < target.size() && j < msg.size()) {
        if (target[i] == msg[j])
            i++;
        j++;
    }
 
    cout << (i == target.size() ? "yes" : "no");
 
    return 0;
}