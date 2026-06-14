#include <bits/stdc++.h>
using namespace std;
 
int getIndex(string s) {
    if (s == "S") return 0;
    if (s == "M") return 1;
    if (s == "L") return 2;
    if (s == "XL") return 3;
    return 4;
}
 
string getName(int x) {
    if (x == 0) return "S";
    if (x == 1) return "M";
    if (x == 2) return "L";
    if (x == 3) return "XL";
    return "XXL";
}
 
int main() {
    int cnt[5];
 
    for (int i = 0; i < 5; i++) {
        cin >> cnt[i];
    }
 
    int k;
    cin >> k;
 
    while (k--) {
        string need;
        cin >> need;
 
        int pos = getIndex(need);
 
        for (int d = 0; d <= 4; d++) {
            int bigger = pos + d;
            int smaller = pos - d;
 
            if (bigger < 5 && cnt[bigger] > 0) {
                cout << getName(bigger) << endl;
                cnt[bigger]--;
                break;
            }
 
            if (smaller >= 0 && cnt[smaller] > 0) {
                cout << getName(smaller) << endl;
                cnt[smaller]--;
                break;
            }
        }
    }
 
    return 0;
}