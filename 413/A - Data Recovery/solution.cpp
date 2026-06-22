#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,mn,mx;
    cin>>n>>m>>mn>>mx;
    bool hasMin=false,hasMax=false;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if (x<mn ||x>mx) {
            cout<<"Incorrect"<<endl;
            return 0;
        }
        if (x == mn) hasMin = true;
        if (x == mx) hasMax = true;
    }
    int need = 0;
    if (!hasMin) need++;
    if (!hasMax) need++;
 
    if (need <= n - m) {
        cout << "Correct
";
    } else {
        cout << "Incorrect
";
    }
 
    return 0;
}