#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
 
    vector<vector<int>> occupied(K + 1, vector<int>(K + 1, 0));
 
    int center = (K + 1) / 2;
 
    while (N--) {
        int M;
        cin >> M;
 
        long long bestDistance = LLONG_MAX;
        int bestRow = -1;
        int bestLeft = -1;
 
        for (int row = 1; row <= K; row++) {
            for (int left = 1; left + M - 1 <= K; left++) {
                int right = left + M - 1;
                bool free = true;
 
                for (int seat = left; seat <= right; seat++) {
                    if (occupied[row][seat]) {
                        free = false;
                        break;
                    }
                }
 
                if (!free)
                    continue;
 
                long long distance = 0;
 
                for (int seat = left; seat <= right; seat++) {
                    distance += abs(row - center);
                    distance += abs(seat - center);
                }
 
                if (distance < bestDistance) {
                    bestDistance = distance;
                    bestRow = row;
                    bestLeft = left;
                }
            }
        }
 
        if (bestRow == -1) {
            cout << -1 << '
';
        } else {
            int bestRight = bestLeft + M - 1;
 
            cout << bestRow << " "
                 << bestLeft << " "
                 << bestRight << '
';
 
            for (int seat = bestLeft; seat <= bestRight; seat++) {
                occupied[bestRow][seat] = 1;
            }
        }
    }
 
    return 0;
}