#include <iostream>

using namespace std;

int
main() {
  int n;
  while (cin >> n && n) {
    int food = 0;
    int cal;
    for (int i = 0; i < n; ++i) {
      cin >> cal;
      if (cal <= 1000) food++;
    }
    cout << food << endl;
  }
  return 0;
}
