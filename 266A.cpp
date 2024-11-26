#include <iostream>
#include <vector>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int buscar(int i, string s) {
    int cont = 0;
    while(i < s.size() - 1) {
        if(s[i] == s[i + 1]) {
            cont++;
            i++;
            cont += buscar(i, s);
            return cont;
        }
        return cont;
    }
    return cont;
}

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int cont = 0;
    int i = 0;
    while(i < s.size() - 1) {
        if(s[i] == s[i + 1]) {
            int conta = buscar(i, s);
            cont += conta;
            i += conta + 1;
            continue;
        }
        i++;
    }

    cout << cont;

    return 0;
}