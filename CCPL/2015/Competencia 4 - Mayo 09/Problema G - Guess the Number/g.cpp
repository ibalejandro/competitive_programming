#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
string line;
int n;
vector <ll> nums;
ll primes[8];

int
main() {
  primes[0] = 2LL;
  primes[1] = 3LL;
  primes[2] = 5LL;
  primes[3] = 7LL;
  primes[4] = 11LL;
  primes[5] = 13LL;
  primes[6] = 17LL;
  primes[7] = 19LL;
  while (getline(cin, line) && line != "*") {
    nums.clear();
    for (int i = 0; i < line.size(); ++i) {
      if (line[i] == 'Y') nums.push_back(i + 1);
    }
    ll ans = 1LL;
    while (true) {
      bool allOnes = true;
      ll mini = LONG_LONG_MAX;
      for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 1LL) continue;
        else allOnes = false;
        for (int j = 0; j < 8; ++j) {
          if (nums[i] % primes[j] == 0LL) {
            mini = min(mini, primes[j]);
            break; 
          }
        } 
      }
      if (allOnes) break;
      for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] % mini == 0LL) nums[i] /= mini; 
      }
      ans *= mini;
    }
    bool can = true;
    for (int i = 0; i < line.size(); ++i) {
      if (line[i] == 'N' && ans % (i + 1) == 0) can = false;
    }
    if (can) printf("%d\n", ans);
    else printf("%d\n", -1);
  }
  return 0;
}
