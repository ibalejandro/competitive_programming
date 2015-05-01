#include <iostream>

using namespace std;

int
main() {
  int lower;
  int upper;
  while (cin >> lower >> upper) {
    int l = lower;
    int u = upper;        
    int max = 0;
    if (lower > upper) swap (lower, upper);
    while (lower <= upper) {
        int n = lower;
        int cycLen = 1;
        while (n != 1) {
            cycLen++;
            if (n%2 != 0) {
                n = (3*n) + 1;
            } else {
                n = n/2;
            }
        }
        if (cycLen > max) max = cycLen;
        lower++;
    }
    cout << l << " " << u << " " << max << endl;
  }
  
  return 0;
}
