#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string t = "aabb";
 
    for (int i = 0; i < n; i++) {
        cout << t[i % 4];
    }
 
    return 0;
}