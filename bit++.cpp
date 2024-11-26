#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {

    int n; cin >> n;

    int x =0;
    for(int i = 0; i < n; ++i) {
        string s; cin >> s;

        if(s.find("--") != string::npos) {
            x--;
        } else if(s.find("++") != string::npos) {
            x++;
        }
    }


    cout << x;
    return 0;
}