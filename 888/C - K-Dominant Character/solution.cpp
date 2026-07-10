#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    int answer = n;
 
    for (char c = 'a'; c <= 'z'; c++) {
        int lastPosition = -1;
        int maximumGap = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                int gap = i - lastPosition - 1;
                maximumGap = max(maximumGap, gap);
 
                lastPosition = i;
            }
        }
 
        
        int finalGap = n - lastPosition - 1;
        maximumGap = max(maximumGap, finalGap);
 
        answer = min(answer, maximumGap + 1);
    }
 
    cout << answer << '
';
 
    return 0;
}