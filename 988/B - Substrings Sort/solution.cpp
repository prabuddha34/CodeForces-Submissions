#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    return a.length() < b.length();
 
}
int main() {
 int n;
    cin >> n;
    string s[105];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n-1; i++) {
        if (s[i+1].find(s[i]) == -1) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
 
 
    return 0;
}