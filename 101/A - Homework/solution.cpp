#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int k;
    cin >> k;
 
    int freq[26] = {0};
 
    for(char c : s) {
        freq[c - 'a']++;
    }
 
    vector<pair<int,char>> v;
 
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            v.push_back({freq[i], char(i + 'a')});
        }
    }
 
    sort(v.begin(), v.end());
 
    set<char> removed;
 
    for(int i = 0; i < v.size(); i++) {
        if(k >= v[i].first) {
            k -= v[i].first;
            removed.insert(v[i].second);
        }
    }
 
    int distinct = 0;
 
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0 && removed.count(i + 'a') == 0) {
            distinct++;
        }
    }
 
    cout << distinct << endl;
 
    for(char c : s) {
        if(removed.count(c) == 0) {
            cout << c;
        }
    }
 
    cout << endl;
}