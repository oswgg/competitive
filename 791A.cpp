#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int a, b; cin >> a >> b;

    int cont = 0;
    while (a < b || a == b) {
        cont++;
        a = a * 3;
        b = b * 2;
    }

    cout << cont;

    return 0;
}