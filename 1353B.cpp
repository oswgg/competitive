#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;

    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for(int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for(int i = 0; i  < k; ++i) {
            for(int j = 0; j < k; ++j) {
                if(a[i] > b[i]) {
                    break;
                }
                int aux;
                aux = a[i];
                a[i] = b[i];
                b[i] = aux;
            }
        }

        cout << accumulate(a.begin(), a.end(), 0) << "\n";

    }

    return 0;
}
