#include <bits/stdc++.h>
using namespace std;
 
int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    vector<int> ans;
 
    for (int s = 1; s <= 81; s++) {
        long long x = 1LL * b * (long long)pow(s, a) + c;
 
        if (x > 0 && x < 1000000000 && sumDigits(x) == s) {
            ans.push_back((int)x);
        }
    }
 
    sort(ans.begin(), ans.end());
 
    cout << ans.size() << '
';
    for (int x : ans)
        cout << x << " ";
}