#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<string> types;
 
    for (int i = 0; i < n; i++) {
        char a, b, c, d;
        cin >> a >> b >> c >> d;
 
        string s1 = "";
        s1 += a; s1 += b; s1 += c; s1 += d;
 
        string s2 = "";
        s2 += c; s2 += a; s2 += d; s2 += b;
 
        string s3 = "";
        s3 += d; s3 += c; s3 += b; s3 += a;
 
        string s4 = "";
        s4 += b; s4 += d; s4 += a; s4 += c;
 
        string best = min(min(s1, s2), min(s3, s4));
        types.insert(best);
 
        if (i != n - 1) {
            string stars;
            cin >> stars;
        }
    }
 
    cout << types.size();
 
    return 0;
}