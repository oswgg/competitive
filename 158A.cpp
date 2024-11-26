#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#include <vector>

using namespace std;

int main() {

    int n, x; cin >> n >> x;
    int cont = 0;

    vector<int> arr(n);

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(const int i : arr) {
        if(i >= arr[x-1] && i > 0) {
            cont++;
        }
    }

    cout << cont;

    return 0;
}
