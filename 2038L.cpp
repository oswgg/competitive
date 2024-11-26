//
// Created by oswgg on 18/11/24.
//
#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int n; cin >> n;

    int a = 0, b = 0, c = 0;
    int rest = 60;
    int cont = 0;

    while(a != n || b != n || c != n) {
        if(c != n) {
            if(rest >= 25) {
                rest -= 25;
                c++;
                continue;
            }
        }

        if(b != n) {
            if(rest >= 21) {
                rest -= 21;
                b++;
                continue;
            }
        }

        if(a != n) {
            if(rest >= 18) {
                rest -= 18;
                a++;
                continue;
            }
        }

        cont++;
        rest = 60;
    }

    cout << cont + 1;
    return 0;
}