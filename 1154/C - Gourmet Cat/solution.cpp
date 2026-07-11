#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    long long weeks = min({a / 3, b / 2, c / 2});
    long long answer = weeks * 7;
    a-=weeks*3;
    b-=weeks*2;
    c-=weeks*2;
    int food[7] = {0, 1, 2, 0, 2, 1, 0};
    int extra = 0;
 
    for (int start = 0; start < 7; start++) {
        long long fish = a;
        long long rabbit = b;
        long long chicken = c;
 
        int days = 0;
        int current = start;
 
        while (true) {
            if (food[current] == 0) {
                if (fish == 0) break;
                fish--;
            }
            else if (food[current] == 1) {
                if (rabbit == 0) break;
                rabbit--;
            }
            else {
                if (chicken == 0) break;
                chicken--;
            }
 
            days++;
            current = (current + 1) % 7;
        }
 
        extra = max(extra, days);
    }
 
    cout << answer + extra << '
';
 
    return 0;
}