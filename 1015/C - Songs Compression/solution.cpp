#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    return a.length() < b.length();
 
}
int main() {
 int n;
    cin >> n;
    long long m;
    cin >> m;
    long long total=0;
    long long compressedTotal=0;
    vector<long long> save;
    for(int i=0;i<n;i++) {
        long long a, b;
        cin >> a >> b;
 
        total += a;
        compressedTotal += b;
 
        save.push_back(a - b);
    }
 
    if (compressedTotal > m) {
        cout << -1 << endl;
        return 0;
    }
 
    sort(save.rbegin(), save.rend());
    int count=0;
    for(int i=0;i<n;i++) {
        if (total <= m) break;
 
        total -= save[i];
        count++;
    }
    cout << count << endl;
 
 
    return 0;
}