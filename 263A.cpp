#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    int x;
    bool again = true;

    int contx = 0;
    int conty = 0;

    do {
        contx = 0;
        conty++;
        for(int i = 0; i < 5; ++i) {
            contx++;
            cin >> x;

            if(x == 1) {
                again = false;
                break;
            }

        }
    } while(again);

    int mx = abs(3 - contx);
    int my = abs(3 - conty);

    int suma = mx + my;
    cout << suma;
    return 0;
}
