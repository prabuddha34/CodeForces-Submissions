#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<string> w;
    string x;
 
    while (cin >> x)
        w.push_back(x);
 
    string ans;
    vector<int> st;
    bool done = false;
 
    for (string s : w) {
        if (done) {
            cout << "Error occurred";
            return 0;
        }
 
        if (s == "pair") {
            ans += "pair<";
            st.push_back(0);
        } else {
            ans += "int";
 
            while (true) {
                if (st.empty()) {
                    done = true;
                    break;
                }
 
                st.back()++;
 
                if (st.back() == 1) {
                    ans += ",";
                    break;
                }
 
                ans += ">";
                st.pop_back();
            }
        }
    }
 
    if (!done || !st.empty())
        cout << "Error occurred";
    else
        cout << ans;
 
    return 0;
}