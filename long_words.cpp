#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    int n; cin >> n;

    for(int i = 0; i < n; ++i) {
        string w; cin >> w;

        if(w.size() > 10) {
            cout << w.at(0) << w.size() - 2 << w.at(w.size()-1) << "\n";
        } else {
            cout << w << '\n';
        }
    }

    return 0;
}