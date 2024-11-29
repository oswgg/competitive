//
// Created by Oswaldo G. on 28/11/24.
//
/**
 * Basta con sacar el resultado de la suma original y restar todos los que
 * sean multiplos de dos hasta llegar a n, restandole el numero que corresponde.
 */
#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        long long int n, res, pow = 1; cin >> n;

        res = n*(n+1)/2;

        while (pow <= n) {
            res -= pow*2;
            pow*=2;
        }

        cout << res << "\n";
    }

    return 0;
}