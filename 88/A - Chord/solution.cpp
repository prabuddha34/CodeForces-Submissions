#include <bits/stdc++.h>
using namespace std;
 
int main() {
    map<string, int> mp;
 
    vector<string> notes = {
        "C", "C#", "D", "D#", "E", "F",
        "F#", "G", "G#", "A", "B", "H"
    };
 
    for (int i = 0; i < 12; i++) {
        mp[notes[i]] = i;
    }
 
    string a, b, c;
    cin >> a >> b >> c;
 
    vector<int> v = {mp[a], mp[b], mp[c]};
    sort(v.begin(), v.end());
 
    for (int root = 0; root < 12; root++) {
        vector<int> major = {
            root,
            (root + 4) % 12,
            (root + 7) % 12
        };
 
        vector<int> minor = {
            root,
            (root + 3) % 12,
            (root + 7) % 12
        };
 
        sort(major.begin(), major.end());
        sort(minor.begin(), minor.end());
 
        if (v == major) {
            cout << "major
";
            return 0;
        }
 
        if (v == minor) {
            cout << "minor
";
            return 0;
        }
    }
 
    cout << "strange
";
 
    return 0;
}