#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#include <vector>

using namespace std;

int main() {

    int n, m; cin >> n >> m;

    vector<int> vert(m), hor(n);

    fill(vert.begin(), vert.end(), n);
    fill(hor.begin(), hor.end(), m);

    int cont = 0;

    for(int i = 0; i < m; ++i) {
        bool puede = true;
        int a = 0, b = 1;

        while(puede) {
            if(vert[i] / 2 >= 1) {
                cont++;
                vert[i] -= 2;
                hor[a]--;
                hor[b]--;
                a += 2;
                b += 2;
            }
            if(vert[i] < 2) {
                puede = false;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        bool puede = true;

        while(puede) {
            if(hor[i] / 2 >= 1) {
                cont++;
                hor[i] -= 2;
            }
            if(hor[i] < 2) {
                puede = false;
            }
        }
    }

    cout << cont;

    return 0;
}