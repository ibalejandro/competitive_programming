#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

int
main() {
  int d, pNumb, p;
  cin >> d >> pNumb;
  vector <int> readP;
  map <int, int> fWidths;
  for (int i = 0; i < pNumb; ++i) {
    cin >> p;
    readP.push_back(p);
    fWidths[p] = p;
  }
  readP.push_back(d);
  fWidths[d] = d;
  
  for (int i = 0; i < readP.size(); ++i) {
    for (int j = i; j < readP.size(); ++j) {
      if (i != j) {
        int subs = abs(readP[j] - readP[i]);
        //if (fWidths.find(subs) == fWidths.end()) {
          fWidths[subs] = subs;
        //}
      }
    }
  }
  
  map <int, int> :: iterator it;
  string ans = "";
  for (it = fWidths.begin(); it != fWidths.end(); ++it) {
    ans += toStr(it->first) + " ";
  }
  
  cout << ans.substr(0, ans.size()-1) << endl;
  
  return 0;
}
