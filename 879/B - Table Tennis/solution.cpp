#include <bits/stdc++.h>
using namespace std;
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
  int n;
    cin >> n;
    long long k;
    cin >> k;
 
    deque<int> q;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    int champion = q.front();
    q.pop_front();
 
    long long wins = 0;
 
    while (wins < k && champion != n) {
        int challenger = q.front();
        q.pop_front();
 
        if (champion > challenger) {
            wins++;
            q.push_back(challenger);
        } else {
            q.push_back(champion);
            champion = challenger;
            wins = 1;
        }
    }
 
    cout << champion << endl;
    return 0;
}