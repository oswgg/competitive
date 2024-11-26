//
// Created by oswgg on 15/11/24.
//

#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int n; cin >> n;
    double total = 100 * n;
    double sum = 0;

    for(int i = 0; i < n; ++i) {
        double x; cin >> x;
        sum += x;
    }

    double pcr = sum / total * 100;

    cout << pcr;

    return 0;
}