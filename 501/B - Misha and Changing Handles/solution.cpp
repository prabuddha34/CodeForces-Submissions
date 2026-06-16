#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    map<string, string> currentToOriginal;
    map<string, string> answer;
 
    while (q--) {
        string oldName, newName;
        cin >> oldName >> newName;
 
        string original;
 
        if (currentToOriginal.count(oldName)) {
            original = currentToOriginal[oldName];
        } else {
            original = oldName;
        }
 
        currentToOriginal.erase(oldName);
        currentToOriginal[newName] = original;
 
        answer[original] = newName;
    }
 
    cout << answer.size() << endl;
 
    for (auto it : answer) {
        cout << it.first << " " << it.second << endl;
    }
 
    return 0;
}