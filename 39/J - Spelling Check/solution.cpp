#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a, b;
    cin >> a >> b;
 
    int n = a.size();
 
    // Number of matching characters from the beginning
    int prefix = 0;
    while (prefix < b.size() && a[prefix] == b[prefix]) {
        prefix++;
    }
 
    // Number of matching characters from the end
    int suffix = 0;
    while (suffix < b.size() &&
           a[n - 1 - suffix] == b[b.size() - 1 - suffix]) {
        suffix++;
    }
 
    int left = n - 1 - suffix;
    int right = prefix;
 
    if (left > right) {
        cout << 0 << '
';
        cout << '
';
        return 0;
    }
 
    cout << right - left + 1 << '
';
 
    for (int i = left; i <= right; i++) {
        cout << i + 1 << " ";
    }
 
    cout << '
';
 
    return 0;
}