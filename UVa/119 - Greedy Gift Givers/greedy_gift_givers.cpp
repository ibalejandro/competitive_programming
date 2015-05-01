#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int
main() {
  string friendsSt;
  int ans = 1;
  while (cin >> friendsSt) {
      if (ans != 1) cout << endl;
      int friends = atoi(friendsSt.c_str());
      vector<string> names;
      map<string, int> gg;  
      map<string, int> ggOr; 
      for (int i = 0; i < friends; ++i) {
        string n;
        cin >> n;
        names.push_back(n);
        gg[n] = 0;
      }
      int cont = 0;
      string name;
      string moneySt;
      string givenGiftsSt;
      int money;
      int givenGifts;
      while (cont < friends) {
        cin >> name >> moneySt >> givenGiftsSt;
        money = atoi(moneySt.c_str());
        givenGifts = atoi(givenGiftsSt.c_str());
        if (givenGifts != 0) {
            int divMoney = money / givenGifts;
            gg[name] -= (divMoney*givenGifts);
            while (givenGifts > 0) {
                string frName;
                cin >> frName;
                gg[frName] += divMoney;
                givenGifts--;
            }
        }
        cont++;
      }
      
      for (int j = 0; j < friends; ++j) {
        cout << names[j] << " " << gg[names[j]] << endl;
      }
      
      ans++; //Sirve para saber cuándo es necesario imprimir endl.
      
  }
  
  return 0;
}
