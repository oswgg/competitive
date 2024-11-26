#include <iostream>
#include <vector>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
    fastIO;
    string s; cin >> s;
    vector<int> l(100);
    fill(l.begin(), l.end(), 0);
    int cont = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(l[s[i]] == 0) {
            l[s[i]] = 1;
            cont++;
        }
    }

    if(cont % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM";
    }
    return 0;
}