#include <bits/stdc++.h>
using namespace std;
 
bool lessEqual(string a, string b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a <= b;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string n;
    cin >> n;
 
    if (lessEqual(n, "127"))
        cout << "byte";
    else if (lessEqual(n, "32767"))
        cout << "short";
    else if (lessEqual(n, "2147483647"))
        cout << "int";
    else if (lessEqual(n, "9223372036854775807"))
        cout << "long";
    else
        cout << "BigInteger";
 
    return 0;
}