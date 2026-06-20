#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<string> lines;
    string s;
 
    int width = 0;
 
    while (getline(cin, s)) {
        lines.push_back(s);
        width = max(width, (int)s.size());
    }
 
    string border(width + 2, '*');
    cout << border << endl;
 
    bool leftTurn = true;
 
    for (string line : lines) {
        int space = width - line.size();
 
        int left = space / 2;
        int right = space / 2;
 
        if (space % 2 == 1) {
            if (leftTurn) {
                right++;
            } else {
                left++;
            }
 
            leftTurn = !leftTurn;
        }
 
        cout << "*";
        cout << string(left, ' ');
        cout << line;
        cout << string(right, ' ');
        cout << "*
";
    }
 
    cout << border << endl;
 
    return 0;
}