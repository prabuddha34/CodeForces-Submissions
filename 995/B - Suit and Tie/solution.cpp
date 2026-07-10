#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>pairs(2*n);
    for(int i=0;i<2*n;i++) {
        cin>>pairs[i];
    }
    int swaps=0;
    for(int i=0;i<2*n;i=i+2) {
        int partner=i+1;
        while (pairs[partner] != pairs[i]) {
            partner++;
        }
        while (partner > i + 1) {
            swap(pairs[partner], pairs[partner - 1]);
            partner--;
            swaps++;
        }
 
    }
    cout<<swaps<<endl;
}