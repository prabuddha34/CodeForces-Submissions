#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<long long,int>>events;
    for(int i=0;i<n;i++) {
        long long b,d;
        cin>>b>>d;
        events.push_back({b,1});
        events.push_back({d,-1});
    }
    sort(events.begin(),events.end());
    long long alive=0;
    long long bestalive=0;
    long long bestyear=0;
    int i=0;
    while (i<events.size()) {
        long long year=events[i].first;
        while (i < events.size() && events[i].first == year) {
            alive += events[i].second;
            i++;
        }
        if (alive > bestalive) {
            bestalive=alive;
            bestyear=year;
        }
    }
    cout<<bestyear<<" "<<bestalive<<endl;
    return 0;
}