#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26]={0};
    for (char c : s) {
        arr[c-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i]>=2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (n==1) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
 
}