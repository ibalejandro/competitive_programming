#include <bits/stdc++.h>

using namespace std;

int t;
int sums[15];

int
main() {
	cin >> t;
	for (int z = 1; z <= t; ++z) {
		int tot = 0;
		for (int i = 1; i <= 10; ++i) {
			cin >> sums[i];
			tot += sums[i];
		}
		int c = (tot / 4) - sums[1] - sums[10];
		int a = sums[2] - c;
		int b = sums[1] - a;
		int e = sums[9] - c;
		int d = sums[10] - e;
		printf("Case %d: %d %d %d %d %d\n", z, a, b, c, d, e);
	}
  return 0;
}

