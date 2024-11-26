#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;
    string a, b; cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a > b) {
        cout << "1";
    } else if(b > a) {
        cout << "-1";
    } else {
        cout << "0";
    }
    return 0;
}