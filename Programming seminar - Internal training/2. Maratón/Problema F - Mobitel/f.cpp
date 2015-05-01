#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <string>
#include <sstream>


using namespace std;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }


int
main() {
  char one [0];
  char two [3] = {'a', 'b', 'c'};
  char three [3] = {'d', 'e', 'f'};
  char four [3] = {'g', 'h', 'i'};
  char five [3] = {'j', 'k', 'l'};
  char six [3] = {'m', 'n', 'o'};
  char seven [4] = {'p', 'q', 'r', 's'};
  char eigth [3] = {'t', 'u', 'v'};
  char nine [4] = {'w', 'x', 'y', 'z'};
  
  
  map <char, pair <int, int> > newKeyboard;
  
  int key;
  
  int i = 1;
  while (i < 10) {
    cin >> key;
    
    if (key == 2) {
      newKeyboard['a'] = make_pair(i, 1);
      newKeyboard['b'] = make_pair(i, 2);
      newKeyboard['c'] = make_pair(i, 3);
    } 
    else if (key == 3) {
      newKeyboard['d'] = make_pair(i, 1);
      newKeyboard['e'] = make_pair(i, 2);
      newKeyboard['f'] = make_pair(i, 3);
    }
    else if (key == 4) {
      newKeyboard['g'] = make_pair(i, 1);
      newKeyboard['h'] = make_pair(i, 2);
      newKeyboard['i'] = make_pair(i, 3);
    }
    else if (key == 5) {
      newKeyboard['j'] = make_pair(i, 1);
      newKeyboard['k'] = make_pair(i, 2);
      newKeyboard['l'] = make_pair(i, 3);
    }
    else if (key == 6) {
      newKeyboard['m'] = make_pair(i, 1);
      newKeyboard['n'] = make_pair(i, 2);
      newKeyboard['o'] = make_pair(i, 3);
    }
    else if (key == 7) {
      newKeyboard['p'] = make_pair(i, 1);
      newKeyboard['q'] = make_pair(i, 2);
      newKeyboard['r'] = make_pair(i, 3);
      newKeyboard['s'] = make_pair(i, 4);
    }
    else if (key == 8) {
      newKeyboard['t'] = make_pair(i, 1);
      newKeyboard['u'] = make_pair(i, 2);
      newKeyboard['v'] = make_pair(i, 3);
    }
    else if (key == 9) {
      newKeyboard['w'] = make_pair(i, 1);
      newKeyboard['x'] = make_pair(i, 2);
      newKeyboard['y'] = make_pair(i, 3);
      newKeyboard['z'] = make_pair(i, 4);
    }
    
    i++;
  }
  
  string word;
  cin >> word;
  
  string ans = "";
  for (int i = 0; i < word.size()-1; ++i) {
    pair <int, int> p = newKeyboard[word[i]];
    for (int j = 0; j < p.second; ++j) {
      ans += toStr(p.first);
    }
    if (newKeyboard[word[i+1]].first == newKeyboard[word[i]].first) ans+= "#";
  }
  
  pair <int, int> p = newKeyboard[word[word.size()-1]];
  for (int j = 0; j < p.second; ++j) {
    ans += toStr(p.first);
  }
  
  cout << ans << endl;
  
  return 0;
}
