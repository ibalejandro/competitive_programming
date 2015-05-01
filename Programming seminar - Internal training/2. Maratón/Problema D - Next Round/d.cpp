#include <iostream>
#include <vector>

using namespace std;

int
main() {
  int n, k;
  cin >> n >> k;
  
  vector <int> p;
  
  int pts;
  for (int i = 0; i < n; ++i) {
    cin >> pts;
    p.push_back(pts);
  }
 
  int cont = 0;
  bool continueIt = true;
  for (int j = 0; j < n && continueIt; ++j) {
    if (p[j] > 0) {
      if (p[j] >= p[k-1]) cont++;
      else continueIt = false;
    }
    else {
      continueIt = false;
    }
  }
  cout << cont;
  return 0;
}
