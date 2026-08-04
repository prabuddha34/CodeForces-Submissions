#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a, d;
    scanf("%lf %lf", &a, &d);
 
    int n;
    scanf("%d", &n);
 
    double cur = 0;
    double per = 4.0 * a;
 
    while (n--) {
        cur += d;
        cur = fmod(cur, per);
 
        if (cur < a) {
            printf("%.10f %.10f
", cur, 0.0);
        }
        else if (cur < 2 * a) {
            printf("%.10f %.10f
", a, cur - a);
        }
        else if (cur < 3 * a) {
            printf("%.10f %.10f
", a - (cur - 2 * a), a);
        }
        else {
            printf("%.10f %.10f
", 0.0, a - (cur - 3 * a));
        }
    }
 
    return 0;
}