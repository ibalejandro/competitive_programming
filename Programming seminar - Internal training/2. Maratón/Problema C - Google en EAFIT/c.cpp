#include <iostream>
#include <map>
#include <string>

using namespace std;

int
main() {
  map <string, bool> text;
  string s;
  while (getline(cin, s)) {
    if (text.find(s) == text.end()) {
      cout << s << endl;
      text[s] = true;
    }
  }
  return 0;
}
