#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int,int>> exams(n);
 
    for (int i = 0; i < n; i++) {
        cin >> exams[i].first >> exams[i].second; // a, b
    }
 
    sort(exams.begin(), exams.end());
 
    int day = 0;
 
    for (int i = 0; i < n; i++) {
        int a = exams[i].first;
        int b = exams[i].second;
 
        if (b >= day) {
            day = b;
        } else {
            day = a;
        }
    }
 
    cout << day << endl;
    return 0;
}