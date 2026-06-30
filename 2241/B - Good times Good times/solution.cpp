#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x;
        scanf("%lld", &x);
        string s = to_string(x);
        int L = (int)s.size();
        long long y = 1;
        for(int i = 0; i < L; i++) y *= 10;
        y += 1;
        printf("%lld
", y);
    }
    return 0;
}