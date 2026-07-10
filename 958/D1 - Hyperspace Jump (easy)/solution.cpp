#include <bits/stdc++.h>
using namespace std;
const long long  mod=998244353;
int main()
{
    int m;
    cin>>m;
    vector<pair<int, int>> coordinates(m);
    map<pair<int, int>, int> frequency;
 
    for (int i = 0; i < m; i++) {
        char open, plusSign, close, slash;
        int a, b, c;
 
        cin >> open >> a >> plusSign >> b >> close >> slash >> c;
 
        int numerator = a + b;
        int denominator = c;
 
        int g = gcd(numerator, denominator);
 
        numerator /= g;
        denominator /= g;
 
        coordinates[i] = {numerator, denominator};
        frequency[coordinates[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cout << frequency[coordinates[i]] << " ";
    }
    return 0;
}