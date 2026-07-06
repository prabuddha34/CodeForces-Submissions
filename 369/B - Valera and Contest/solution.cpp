#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 	int n, k, l, r, s, sk;
 	cin >> n >> k >> l >> r >> s >> sk;
	int tsk = s - sk;
	vector < int > ans(n);
	for(int i = 0; i < k; i++) {
		ans[i] = sk / k;
		if (sk % k != 0) ans[i]++, sk--;		 	
	}
	if (k != n) {
	 	for(int i = k; i < n; i++) {
	 	 	ans[i] = tsk / (n - k);
	 	 	if (tsk % (n - k) != 0) ans[i]++, tsk--;
	 	}
	} 
 
	bool ok = true;
 
	for(int i = 0; i < k; i++) {
	 	if (ans[i] < l || ans[i] > r) ok = false;
	 	for(int j = k; j < n; j++) {
	 	 	if (ans[j] > ans[i]) ok = false;
	 	 	if (ans[j] < l || ans[j] > r)
	 	 		ok = false;
	 	}
	}
        random_shuffle(ans.begin(), ans.end());
	for(int i = 0; i < n; i++)
		cout << ans[i] << ' ';
}