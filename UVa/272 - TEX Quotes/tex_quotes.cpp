#include <iostream>
#include <string>

using namespace std;

int
main() {
  string word;
  string text = "";
  bool openQ = true;
  while (getline(cin, word)) {
    for (int i = 0; i < word.size(); ++i) {
      if (word[i] == '\"') {
        if (openQ) {
          text += "``";
          openQ = false;
        } else {
          text += "''";
          openQ = true;
        }
      } else {
        text += word[i];
      }
    }
    text += "\n";
  }
  
  cout << text;

  return 0;
}