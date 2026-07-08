#include <bits/stdc++.h>
using namespace std;
 
bool isOpen(char c) {
    return c == '<' || c == '{' || c == '[' || c == '(';
}
 
bool match(char open, char close) {
    return (open == '<' && close == '>') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']') ||
           (open == '(' && close == ')');
}
 
int main() {
    string s;
    cin >> s;
 
    stack<char> st;
    int ans = 0;
 
    for (char c : s) {
        if (isOpen(c)) {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "Impossible";
                return 0;
            }
 
            char open = st.top();
            st.pop();
 
            if (!match(open, c)) {
                ans++;
            }
        }
    }
 
    if (!st.empty()) {
        cout << "Impossible";
    } else {
        cout << ans;
    }
 
    return 0;
}