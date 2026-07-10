#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
string s;
int answer = 100;
void solve(int index,string current) {
    if (index ==s.size()) {
        if (current.empty() || current[0] == '0') return;
 
        long long number = stoll(current);
        long long root = sqrt(number);
 
        if (root * root == number) {
            int deleted = s.size() - current.size();
            answer = min(answer, deleted);
        }
 
        return;
    }
    solve(index + 1, current + s[index]);
    solve(index + 1, current);
}
int main()
{
    cin>>s;
    cin >> s;
 
    solve(0, "");
 
    if (answer == 100)
        cout << -1;
    else
        cout << answer;
 
 
}