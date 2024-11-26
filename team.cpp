#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    int n; cin >> n;

    int pcont = 0;
    int a, b, c;
    for(int i = 0; i < n; ++i) {
        int cont = 0;
        cin >> a >> b >> c;
        if(a == 1)
            cont++;

        if(b == 1)
            cont++;

        if(c == 1)
            cont++;

        if(cont >= 2)
            pcont++;
    }

    cout << pcont;

    return 0;
}