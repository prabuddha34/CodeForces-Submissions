#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    const int MAXA = 1000000;
 
    vector<int> cnt(MAXA + 1, 0);
    vector<int> first(MAXA + 1, -1);
    vector<int> last(MAXA + 1, -1);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
 
        cnt[x]++;
 
        if (first[x] == -1)
            first[x] = i;
 
        last[x] = i;
    }
 
    int bestCnt = 0;
    int ansL = 1, ansR = n;
 
    for (int x = 1; x <= MAXA; x++) {
        if (cnt[x] > bestCnt) {
            bestCnt = cnt[x];
            ansL = first[x];
            ansR = last[x];
        }
        else if (cnt[x] == bestCnt && cnt[x] > 0) {
            if (last[x] - first[x] < ansR - ansL) {
                ansL = first[x];
                ansR = last[x];
            }
        }
    }
 
    cout << ansL << " " << ansR << '
';
 
    return 0;
}