#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
    cin>>t;
    int sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    long long dx=ex-sx;
    long long dy=ey-sy;
    for (int i=0;i<t;i++) {
        char c=s[i];
        if(c == 'E' && dx > 0) dx--;
        else if(c == 'W' && dx < 0) dx++;
        else if(c == 'N' && dy > 0) dy--;
        else if(c == 'S' && dy < 0) dy++;
 
        if(dx == 0 && dy == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout<<-1<<endl;
 
    return 0;
}