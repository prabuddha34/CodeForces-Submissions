#include<bits/stdc++.h>
using namespace std ;
 
#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define sz(a)           (ll)a.size()
#define F               first
#define S               second
#define INF             2000000000000000000
#define popcount(x)     __builtin_popcountll(x)
#define pll             pair<ll,ll>
#define pii             pair<int,int>
#define ld              long double
 
template<typename T, typename U> static inline void amin(T &x, U y){ if(y < x) x = y; }
template<typename T, typename U> static inline void amax(T &x, U y){ if(x < y) x = y; }
 
#ifdef LOCAL
#define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 2401
#endif
 
 
int _runtimeTerror_()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=(n-1)/2;i>=0;--i) {
    	if(s[i] == s[(n - 1) / 2]) {
    		++cnt;
    	}
    	else {
    		break;
    	}
    }
    cout << 2 * cnt - (n & 1) << "
";
    return 0;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef runSieve
        sieve();
    #endif
    #ifdef NCR
        initncr();
    #endif
    int TESTS = 1;
    cin >> TESTS;
    while(TESTS--) {
        _runtimeTerror_();
    }
    return 0;
}