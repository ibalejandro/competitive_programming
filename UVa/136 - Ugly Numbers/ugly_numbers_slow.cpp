#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

ull arr[] = {2ULL, 3ULL, 5ULL};
bool arrMem[1 << 30]; 
int cont = 1;

int main() {
  memset(arrMem, 0, sizeof(arrMem));
  cout << "Ugly number #" << cont << " is: " << cont << endl;
  for (ull uNum = 2ULL; cont != 100; ++uNum) {
    ull res = uNum;
    for (int i = 0; i < 3 && res != 1; ++i) {
      while (res % arr[i] == 0) {
        if (arrMem[res]) {
          res = 1ULL;
          break;
        }
        res = res / arr[i];
      }
    }
    if (res == 1ULL) {
      cout << "Ugly number #" << ++cont << " is: " 
           << uNum << endl;
      arrMem[uNum] = true;
    } 
  }
  return 0;
}
