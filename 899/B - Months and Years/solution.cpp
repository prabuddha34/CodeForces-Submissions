#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<int> year1 = {31,28,31,30,31,30,31,31,30,31,30,31};
    vector<int> year2 = {31,29,31,30,31,30,31,31,30,31,30,31};
 
    vector<int> cal;
 
    for (int i = 0; i < 5; i++) {
        cal.insert(cal.end(), year1.begin(), year1.end());
    }
 
    cal.insert(cal.end(), year2.begin(), year2.end());
 
    for (int i = 0; i < 5; i++) {
        cal.insert(cal.end(), year1.begin(), year1.end());
    }
 
    for (int i = 0; i + n <= (int)cal.size(); i++) {
        bool ok = true;
 
        for (int j = 0; j < n; j++) {
            if (cal[i + j] != a[j]) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            cout << "YES
";
            return 0;
        }
    }
 
    cout << "NO
";
 
    return 0;
}