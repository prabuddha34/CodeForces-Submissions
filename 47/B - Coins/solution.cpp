#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<string> v(3);
 
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
 
    string s = "ABC";
 
    do {
        bool ok = true;
 
        for(int i = 0; i < 3; i++) {
            char a = v[i][0];
            char b = v[i][2];
 
            int pa = s.find(a);
            int pb = s.find(b);
 
            if(v[i][1] == '<' && !(pa < pb))
                ok = false;
 
            if(v[i][1] == '>' && !(pa > pb))
                ok = false;
        }
 
        if(ok) {
            cout << s << endl;
            return 0;
        }
 
    } while(next_permutation(s.begin(), s.end()));
 
    cout << "Impossible" << endl;
 
    return 0;
}