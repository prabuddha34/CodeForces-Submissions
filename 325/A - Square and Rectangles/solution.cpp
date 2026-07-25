#include <bits/stdc++.h>
using namespace std;
 
struct Rect{
    int x1,y1,x2,y2;
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<Rect> a(n);
    vector<int> xs, ys;
 
    long long area = 0;
    int minx = 1e9, miny = 1e9;
    int maxx = 0, maxy = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].x2 >> a[i].y2;
 
        area += 1LL * (a[i].x2 - a[i].x1) * (a[i].y2 - a[i].y1);
 
        minx = min(minx, a[i].x1);
        miny = min(miny, a[i].y1);
        maxx = max(maxx, a[i].x2);
        maxy = max(maxy, a[i].y2);
 
        xs.push_back(a[i].x1);
        xs.push_back(a[i].x2);
        ys.push_back(a[i].y1);
        ys.push_back(a[i].y2);
    }
 
    if (maxx - minx != maxy - miny) {
        cout << "NO";
        return 0;
    }
 
    if (area != 1LL * (maxx - minx) * (maxy - miny)) {
        cout << "NO";
        return 0;
    }
 
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());
 
    sort(ys.begin(), ys.end());
    ys.erase(unique(ys.begin(), ys.end()), ys.end());
 
    for (int i = 0; i + 1 < xs.size(); i++) {
        for (int j = 0; j + 1 < ys.size(); j++) {
 
            int cnt = 0;
 
            for (auto r : a) {
                if (r.x1 <= xs[i] && r.x2 >= xs[i + 1] &&
                    r.y1 <= ys[j] && r.y2 >= ys[j + 1])
                    cnt++;
            }
 
            if (cnt != 1) {
                cout << "NO";
                return 0;
            }
        }
    }
 
    cout << "YES";
}