#include <bits/stdc++.h>
using namespace std;
 
bool isSuffix(const string& small, const string& big) {
    if (small.size() > big.size()) {
        return false;
    }
 
    int start = big.size() - small.size();
 
    for (int i = 0; i < small.size(); i++) {
        if (small[i] != big[start + i]) {
            return false;
        }
    }
 
    return true;
}
 
int main() {
    int n;
    cin >> n;
 
    map<string, set<string>> phoneBook;
 
    for (int i = 0; i < n; i++) {
        string name;
        int count;
 
        cin >> name >> count;
 
        for (int j = 0; j < count; j++) {
            string number;
            cin >> number;
 
            // set automatically removes duplicate numbers
            phoneBook[name].insert(number);
        }
    }
 
    cout << phoneBook.size() << '
';
 
    for (auto person : phoneBook) {
        string name = person.first;
 
        vector<string> numbers(
            person.second.begin(),
            person.second.end()
        );
 
        vector<string> answer;
 
        for (int i = 0; i < numbers.size(); i++) {
            bool remove = false;
 
            for (int j = 0; j < numbers.size(); j++) {
                if (i == j) {
                    continue;
                }
 
                // Remove numbers[i] if it is a suffix
                // of another longer number
                if (numbers[j].size() > numbers[i].size() &&
                    isSuffix(numbers[i], numbers[j])) {
                    remove = true;
                    break;
                }
            }
 
            if (!remove) {
                answer.push_back(numbers[i]);
            }
        }
 
        cout << name << " " << answer.size();
 
        for (string number : answer) {
            cout << " " << number;
        }
 
        cout << '
';
    }
 
    return 0;
}