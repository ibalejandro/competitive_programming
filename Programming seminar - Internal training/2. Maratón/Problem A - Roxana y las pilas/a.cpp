#include <iostream>
#include <stack>

using namespace std;

int
main() {
  stack <int> s;
  int n;
  cin >> n;
  while (n > 0) {
    string inst;
    cin >> inst;
    if (inst == "PUSH") {
      int numb;
      cin >> numb;
      s.push(numb);
    }
    else if (inst == "POP") {
      if (!s.empty()) {
        s.pop();
      }
    }
    else {
      if (!s.empty()) {
        int sNumb = s.top();
        cout << sNumb << endl;
      }
      else {
        cout << "EMPTY" << endl;
      }
    }
    n--;
  }
  return 0;
}
