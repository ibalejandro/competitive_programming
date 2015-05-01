#include <iostream>
#include <math.h> 

using namespace std;

int
main() {
  int cases;
  cin >> cases;
  while (cases > 0) {
    int n;
    long long a, b;
    cin >> n >> a >> b;
    long long mini = min(a, b);
    double gold = pow (2.0, n);
    int days = 0;
    while (gold > mini || (mini % (long long) gold != 0) ) {
      gold /= 2;
      days++;
    }
    cout << days << endl;
    cases--;
  }
  
  return 0;
}
