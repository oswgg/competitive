//
// Created by Oswaldo G. on 28/11/24.
//
/**
 * Solo hace falta verificar las 3 posibilidades de sumas.
 */
#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int n; cin >> n;

    while (n--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a) {
            cout << "YES\n";
        }  else {
            cout << "NO\n";
        }
    }


    return 0;
}