//
// Created by Oswaldo G. on 26/11/24.
//
/**
 * En este solo intento cubrir por completo un lado, por lo que redondeo y despues el otro
 * Asi teniendo cuantos ocupo de cada lado, solamente es obtener el total, sacando el area.
 */
#include <iostream>
#include <cmath>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    double n, m, a; cin >> n >> m >> a;


    double l = ceil(n / a);
    double an = ceil(m / a);

    long long res = l * an;

    cout << res;
}