#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[100005];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int fixed = 0;
 
    for(int i = 0; i < n; i++) {
        if(a[i] == i) {
            fixed++;
        }
    }
 
    bool canAddTwo = false;
 
    for(int i = 0; i < n; i++) {
        if(a[i] != i && a[a[i]] == i) {
            canAddTwo = true;
            break;
        }
    }
 
    if(canAddTwo) {
        cout << fixed + 2;
    }
    else if(fixed < n) {
        cout << fixed + 1;
    }
    else {
        cout << fixed;
    }
 
    return 0;
}