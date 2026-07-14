#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<int> atPositions;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@') {
            atPositions.push_back(i);
        }
    }
 
    // There must be at least one @
    if (atPositions.empty()) {
        cout << "No solution
";
        return 0;
    }
 
    // First email must have a letter before @
    if (atPositions[0] == 0) {
        cout << "No solution
";
        return 0;
    }
 
    // Last email must have a letter after @
    if (atPositions.back() == s.size() - 1) {
        cout << "No solution
";
        return 0;
    }
 
    // Between two @ characters, we need at least two letters:
    // one for the end of the previous email
    // one for the beginning of the next email
    for (int i = 1; i < atPositions.size(); i++) {
        if (atPositions[i] - atPositions[i - 1] < 3) {
            cout << "No solution
";
            return 0;
        }
    }
 
    int currentAt = 0;
 
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
 
        // Put comma after the first letter following every @ except the last
        if (currentAt < atPositions.size() - 1 &&
            i == atPositions[currentAt] + 1) {
 
            cout << ",";
            currentAt++;
        }
    }
 
    cout << '
';
 
    return 0;
}