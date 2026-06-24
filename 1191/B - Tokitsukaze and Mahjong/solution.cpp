#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<string> a(3);
    cin >> a[0] >> a[1] >> a[2];
 
    sort(a.begin(), a.end());
 
    // Check answer 0: triplet
    if (a[0] == a[1] && a[1] == a[2]) {
        cout << 0 << endl;
        return 0;
    }
 
    // Check answer 0: sequence
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            for (int k = j + 1; k < 3; k++) {
                int x = a[i][0] - '0';
                int y = a[j][0] - '0';
                int z = a[k][0] - '0';
 
                char s1 = a[i][1];
                char s2 = a[j][1];
                char s3 = a[k][1];
 
                if (s1 == s2 && s2 == s3) {
                    vector<int> v = {x, y, z};
                    sort(v.begin(), v.end());
 
                    if (v[0] + 1 == v[1] && v[1] + 1 == v[2]) {
                        cout << 0 << endl;
                        return 0;
                    }
                }
            }
        }
    }
 
    // Check answer 1
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int x = a[i][0] - '0';
            int y = a[j][0] - '0';
 
            char s1 = a[i][1];
            char s2 = a[j][1];
 
            if (a[i] == a[j]) {
                cout << 1 << endl;
                return 0;
            }
 
            if (s1 == s2 && abs(x - y) <= 2) {
                cout << 1 << endl;
                return 0;
            }
        }
    }
 
    cout << 2 << endl;
 
    return 0;
}