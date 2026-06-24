#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<bool>remove(n,false);
 
    string s;
    cin >> s;
 
    for (char ch = 'a'; ch <= 'z' && k > 0; ch++) {
        for (int i = 0; i < n && k > 0; i++) {
            if (s[i] == ch) {
                remove[i] = true;
                k--;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (!remove[i]) {
            cout << s[i];
        }
    }
 
    return 0;
}