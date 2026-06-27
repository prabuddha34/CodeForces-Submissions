// Bear and String Distance, by Errichto
#include<bits/stdc++.h>
using namespace std;
 
const int nax = 1e6 + 5;
char s[nax];
 
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	scanf("%s", s);
	for(int i = 0; i < n; ++i) {
		// we want to change s[i]
		char best_letter = s[i]; // by default we don't change it at all
		int best_distance = 0;
		for(char maybe = 'a'; maybe <= 'z'; ++maybe) {
			int distance = abs(maybe - s[i]);
			// we must check if "distance <= k" because we don't want to exceed the total distance
			// among letters with "distance <= k" we choose the most distant one
			if(distance <= k && distance > best_distance) {
				best_distance = distance;
				best_letter = maybe;
			}
		}
		k -= best_distance; // we decrease the remaining distance
		s[i] = best_letter;
	}
	assert(k >= 0);
	// we found a correct s' only if "k == 0"
	if(k > 0) puts("-1");
	else printf("%s
", s);
	return 0;
}