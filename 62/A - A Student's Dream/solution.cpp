#include <bits/stdc++.h>
using namespace std;
 
bool possible(int g, int b) {
    return b >= g - 1 && b <= 2 * (g + 1);
}
 
int main() {
    int al, ar, bl, br;
    cin >> al >> ar;
    cin >> bl >> br;
 
    if (possible(al, br) || possible(ar, bl)) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
 
    return 0;
}