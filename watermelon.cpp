#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;
int main() {

    fastIO;

    int n; cin >> n;

    if(n == 2) {
        cout << "NO";
        return 0;
    }

    if(n % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
