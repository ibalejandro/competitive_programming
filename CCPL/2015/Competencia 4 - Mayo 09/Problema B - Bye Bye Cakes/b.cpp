#include <bits/stdc++.h>

using namespace std;

int need[5], has[5];

int
main() {
  while (true) {
    for (int i = 0; i < 4; ++i) scanf("%d", &has[i]); 
    for (int i = 0; i < 4; ++i) scanf("%d", &need[i]); 
    if (has[0] == -1) break;
    int maxi = 0;
    for (int i = 0; i < 4; ++i) {
      double op = (has[i] * 1.0) / (need[i] * 1.0);
      int val = (int) ceil(op);
      maxi = max(maxi, val);
    }
    int tobuy = maxi * need[0];
    printf("%d", tobuy - has[0]);
    for (int i = 1; i < 4; ++i) {
      tobuy = maxi * need[i];
      printf(" %d", tobuy - has[i]);
    }
    puts("");
  }
  return 0; 
}
