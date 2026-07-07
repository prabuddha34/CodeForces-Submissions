#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long low = -2000000000LL;
    long long high = 2000000000LL;
 
    while (n--) {
        string sign, ans;
        long long x;
 
        cin >> sign >> x >> ans;
 
        if (sign == ">") {
            if (ans == "Y") {
                low = max(low, x + 1);
            } else {
                high = min(high, x);
            }
        }
 
        else if (sign == "<") {
            if (ans == "Y") {
                high = min(high, x - 1);
            } else {
                low = max(low, x);
            }
        }
 
        else if (sign == ">=") {
            if (ans == "Y") {
                low = max(low, x);
            } else {
                high = min(high, x - 1);
            }
        }
 
        else if (sign == "<=") {
            if (ans == "Y") {
                high = min(high, x);
            } else {
                low = max(low, x + 1);
            }
        }
    }
 
    if (low > high) {
        cout << "Impossible" << endl;
    } else {
        cout << low << endl;
    }
 
    return 0;
}