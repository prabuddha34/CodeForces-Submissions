#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[6];
 
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
 
    sort(a, a + 6);
 
    for (int i = 0; i <= 2; i++) {
 
        if (a[i] == a[i + 3]) {
 
            vector<int> rem;
 
            for (int j = 0; j < i; j++)
                rem.push_back(a[j]);
 
            for (int j = i + 4; j < 6; j++)
                rem.push_back(a[j]);
 
            if (rem[0] == rem[1])
                cout << "Elephant
";
            else
                cout << "Bear
";
 
            return 0;
        }
    }
 
    cout << "Alien
";
 
    return 0;
}