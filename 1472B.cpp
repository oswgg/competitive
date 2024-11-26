#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int total = 0;
        int unos = 0, dos = 0;

        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            total += x;
            if (x == 1) {
                unos++;
            } else {
                dos++;
            }
        }

        // Si la suma total es impar, no se puede dividir en dos partes iguales
        if (total % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        // Meta: peso que cada persona debe alcanzar
        int target = total / 2;

        // Usa caramelos de 2 gramos primero
        int max_dos = min(dos, target / 2); // Máximos caramelos de 2 que puedes usar
        target -= max_dos * 2; // Reduce el objetivo

        // Verifica si los caramelos de 1 gramo pueden cubrir el peso restante
        if (target <= unos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
