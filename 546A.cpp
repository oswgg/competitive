#include <iostream>
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
  fastIO;

  long long int k, w, n; cin >> k >> w >> n;

  long long int total = 0;
  for(long long int i = 1; i <= n; ++i) {
    total += k * i;
  }

  if(total - w < 0) {
    cout << 0;
  } else {
    cout << total - w;
  }
  return 0;
}