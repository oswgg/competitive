#include <vector>
#include <iostream>
#include <string>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    string s; cin >> s;

    vector<int> nums(3);
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '1') {
            nums[0]++;
        } else if(s[i] == '2') {
            nums[1]++;
        } else if(s[i] == '3') {
            nums[2]++;
        }
    }

    string s1;
    for(int i = 0; i < nums.size(); ++i) {
        for(int j = 0; j < nums[i]; ++j) {
            s1 += to_string(i + 1) + "+";
        }
    }

    s1.pop_back();
    cout << s1;

    return 0;
}