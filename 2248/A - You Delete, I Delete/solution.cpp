#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nline "
"
#define sz(x) (int)x.size()
 
void solve(){
	string s; cin>>s;
	string ans;
	for(int i=0;i<sz(s);i++){
		if(s[i]=='1'){
			continue;
		}
		string t=s;
		t.erase(t.begin()+i);
		string cur;
		for(int j=0;j<sz(t);j++){
			if(t[j]=='0'){
				continue;
			}
			string now=t;
			now.erase(now.begin()+j);
			if((cur.empty()) or (now<cur)){
				cur=now;
			}
		}
		if((ans.empty()) or (ans<cur)){
			ans=cur;
		}
	}
	cout<<ans<<nline;
	return;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll test_cases=1;
	cin>>test_cases;
	while(test_cases--){
		solve();
	}
}