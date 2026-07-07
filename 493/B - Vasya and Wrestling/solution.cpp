#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long sum1 = 0, sum2 = 0;
    vector<int> first, second;
 
    int last = 0; // 1 = first, 2 = second
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if (x > 0) {
            sum1 += x;
            first.push_back(x);
            last = 1;
        } else {
            sum2 += -x;
            second.push_back(-x);
            last = 2;
        }
    }
 
    if (sum1 > sum2) {
        cout << "first";
    }
    else if (sum2 > sum1) {
        cout << "second";
    }
    else {
        if (first > second) {
            cout << "first";
        }
        else if (second > first) {
            cout << "second";
        }
        else {
            if (last == 1) cout << "first";
            else cout << "second";
        }
    }
 
    return 0;
}