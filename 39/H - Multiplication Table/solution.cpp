#include <bits/stdc++.h>
using namespace std;
 
string toBase(int x, int k) {
    string s;
 
    while (x > 0) {
        s += char('0' + (x % k));
        x /= k;
    }
 
    reverse(s.begin(), s.end());
    return s;
}
 
int main() {
    int k;
    cin >> k;
 
    for (int i = 1; i < k; i++) {
        for (int j = 1; j < k; j++) {
            cout << toBase(i * j, k);
 
            if (j != k - 1)
                cout << " ";
        }
        cout << "
";
    }
 
    return 0;
}