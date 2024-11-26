#include <iostream>
#include <queue>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;
    int n, k; cin >> n >> k;
    string s; cin >> s;
    queue<int> aristas;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'B' && s[i + 1] == 'G') {
            aristas.push(i);
        }
    }

    while(k-- && !aristas.empty()) {
        const auto aS = aristas.size();
        for(int i = 0; i < aS; ++i) {
            const int f = aristas.front();
            s[f] = 'G';
            s[f + 1] = 'B';
            aristas.pop();
            if(s[f - 1] == 'B') {
                aristas.push(f - 1);
            }
            if(s[f + 1] == 'B' && s[f + 2] == 'G') {
                aristas.push(f + 1);
            }
        }
    }

    cout << s;

    return 0;
}