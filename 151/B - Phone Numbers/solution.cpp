#include <bits/stdc++.h>
using namespace std;
 
bool isTaxi(string num) {
    string d = "";
 
    for(char c : num) {
        if(c != '-') d += c;
    }
 
    for(int i = 1; i < 6; i++) {
        if(d[i] != d[0]) return false;
    }
 
    return true;
}
 
bool isPizza(string num) {
    string d = "";
 
    for(char c : num) {
        if(c != '-') d += c;
    }
 
    for(int i = 1; i < 6; i++) {
        if(d[i] >= d[i - 1]) return false;
    }
 
    return true;
}
 
void printNames(vector<string> names) {
    for(int i = 0; i < names.size(); i++) {
        if(i > 0) cout << ", ";
        cout << names[i];
    }
    cout << ".
";
}
 
int main() {
    int n;
    cin >> n;
 
    vector<string> name(n);
    vector<int> taxi(n, 0), pizza(n, 0), girls(n, 0);
 
    for(int i = 0; i < n; i++) {
        int s;
        cin >> s >> name[i];
 
        for(int j = 0; j < s; j++) {
            string num;
            cin >> num;
 
            if(isTaxi(num)) {
                taxi[i]++;
            }
            else if(isPizza(num)) {
                pizza[i]++;
            }
            else {
                girls[i]++;
            }
        }
    }
 
    int maxTaxi = *max_element(taxi.begin(), taxi.end());
    int maxPizza = *max_element(pizza.begin(), pizza.end());
    int maxGirls = *max_element(girls.begin(), girls.end());
 
    vector<string> taxiNames, pizzaNames, girlsNames;
 
    for(int i = 0; i < n; i++) {
        if(taxi[i] == maxTaxi) taxiNames.push_back(name[i]);
        if(pizza[i] == maxPizza) pizzaNames.push_back(name[i]);
        if(girls[i] == maxGirls) girlsNames.push_back(name[i]);
    }
 
    cout << "If you want to call a taxi, you should call: ";
    printNames(taxiNames);
 
    cout << "If you want to order a pizza, you should call: ";
    printNames(pizzaNames);
 
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    printNames(girlsNames);
 
    return 0;
}