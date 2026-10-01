#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		int n;
		scanf("%i",&n);
		vector<int> a(n);
		for(int i=0;i<n;i++)
			scanf("%i",&a[i]);
		sort(a.begin(),a.end());
		int zero=count(a.begin(),a.end(),0);
		if(zero>0)
			printf("%i
",n-zero);
		else{
			bool same=false;
			for(int i=1;i<n;i++)
				if(a[i]==a[i-1])
					same=true;
			if(same)printf("%i
",n);
			else printf("%i
",n+1);
		}
	}
	return 0;
}