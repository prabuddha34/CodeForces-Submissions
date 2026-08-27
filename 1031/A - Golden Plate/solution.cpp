#include <bits/stdc++.h>
using namespace std;
int numsGame(int N) {
    // code here
if (N%2 == 0)
    return 1;
    else
        return 0;
 
}
int countBitsFlip(int a, int b) {
    // code here
    int x=a^b;
    int cnt=0;
    while (x!=0) {
        cnt+=x&1;
        x>>=1;
    }
    return  cnt;
 
}
int nextPowerOfTwo(int n) {
    // code here
    if (n%2 == 0)
        return n/2;
    else
        return 0;
 
 
}
int main() {
    int w,h,k;
    cin>>w>>h>>k;
    int ans=0;
    for (int i=0;i<k;i++) {
        int width=w-4*i;
        int height=h-4*i;
        ans += 2 * width + 2 * height - 4;
    }
    cout<<ans<<endl;
    return 0;
}