#include <iostream>
#include <string>
#include <algorithm>
#define fastIO ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);

using namespace std;

int main() {
    string s; cin >> s;

        transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);

    cout << s;

    return 0;
}

