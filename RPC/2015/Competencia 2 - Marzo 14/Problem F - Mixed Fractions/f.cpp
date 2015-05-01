#include <iostream>

using namespace std;

int
main() {
  int n, d;
  while (cin >> n >> d && (n != 0 || d != 0)) {
    int q = n / d;
    int r = n % d;
    cout << q << " " << r << " / " << d << endl;
  }
  return 0;
}
