#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    map<int, int> opening, closing;
    int zero = 0;
 
    while (n--) {
        string s;
        cin >> s;
 
        int balance = 0, minimum = 0;
 
        for (char c : s) {
            if (c == '(')
                balance++;
            else
                balance--;
 
            minimum = min(minimum, balance);
        }
 
        if (balance == 0 && minimum == 0) {
            zero++;
        }
        else if (balance > 0 && minimum == 0) {
            opening[balance]++;
        }
        else if (balance < 0 && minimum == balance) {
            closing[-balance]++;
        }
    }
 
    int answer = zero / 2;
 
    for (auto [balance, count] : opening) {
        answer += min(count, closing[balance]);
    }
 
    cout << answer << '
';
}