#include <bits/stdc++.h>
using namespace std;
 
vector<long long> v;
 
void generate(string s, int fours, int sevens, int len) {
    if ((int)s.size() == len) {
        if (fours == sevens) {
            v.push_back(stoll(s));
        }
        return;
    }
 
    generate(s + '4', fours + 1, sevens, len);
    generate(s + '7', fours, sevens + 1, len);
}
 
int main() {
    long long n;
    cin >> n;
 
    for (int len = 2; len <= 10; len += 2) {
        generate("", 0, 0, len);
    }
 
    sort(v.begin(), v.end());
 
    for (long long x : v) {
        if (x >= n) {
            cout << x;
            return 0;
        }
    }
 
    return 0;
}