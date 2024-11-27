//
// Created by Oswaldo G. on 26/11/24.
//
/**
 * Solamente hay que esperar que la suma de los vectores x, y, z todos sean 0
 * No es siqueira necesario guardar los valores, puede hacerse mientras se van insertando
 * los mismos.
 */
#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#include <vector>
#include <numeric>

using namespace std;

int main() {
    fastIO;
    int n; cin >> n;
    vector<int> x(n), y(n), z(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int tx = accumulate(x.begin(), x.end(), 0);
    int ty = accumulate(y.begin(), y.end(), 0);
    int tz = accumulate(z.begin(), z.end(), 0);

    if (tx == 0 && ty == 0 && tz == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}
