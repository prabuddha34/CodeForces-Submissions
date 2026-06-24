#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<char> st;
    int moves = 0;
 
    for (char c : s) {
        if (!st.empty() && st.back() == c) {
            st.pop_back();
            moves++;
        } else {
            st.push_back(c);
        }
    }
 
    if (moves % 2 == 1) cout << "Yes
";
    else cout << "No
";
 
    return 0;
}