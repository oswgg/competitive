//
// Created by oswgg on 18/11/24.
//

#include <iostream>
#include <vector>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int t; cin >> t;

    while(t--) {
       int k; cin >> k;
        vector<int>keys(3);
        vector<bool>can(3);

        for(int i = 0; i < 3; ++i) {
            cin >> keys[i];
        }
        can[k - 1] = true;

        while(keys[k - 1] != 0) {
            if(keys[k - 1] != 0) {
                k = keys[k - 1];
                can[k - 1] = true;
            }
        }

        if(can[0] && can[1] && can[2]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}