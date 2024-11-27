//
// Created by Oswaldo G. on 26/11/24.
//
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