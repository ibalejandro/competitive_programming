#include <iostream>
#include <string>

using namespace std;

int
main() {
  char chess [8][8];
  string line;
  int queens = 0;
  for (int i = 0; i < 8; ++i) {
    cin >> line;
    for (int j = 0; j < 8; ++j) {
      chess[i][j] = line[j];
      if (line[j] == '*') queens++;
    }
  }
  
  bool isValid;
  if (queens == 8) isValid = true;
  else isValid = false;
  
  for (int i = 0; i < 8 && isValid; ++i) {
    for (int j = 0; j < 8 && isValid; ++j) {
      if (chess[i][j] == '*') {
        //Arriba (quieta columna)
        for (int u = i; u > 0 && isValid; --u) {
          if (chess[u-1][j] == '*') isValid = false;
        }
        
        //Abajo (quieta columna)
        for (int d = i; d < 7 && isValid; ++d) {
           if (chess[d+1][j] == '*') isValid = false;
        }
        
        //Derecha (quieta fila)
        for (int r = j; r < 7 && isValid; ++r) {
           if (chess[i][r+1] == '*') isValid = false;
        }
        
        //Izquierda (quieta columna)
        for (int l = j; l > 0 && isValid; --l) {
           if (chess[i][l-1] == '*') isValid = false;
        }
        
        //Diagonal izquierda arriba
        for (int duR = i, duC = j;  (duR > 0 && duC > 0) && isValid; --duR, --duC) {
          if (chess[duR-1][duC-1] == '*') isValid = false;
        }
        
        //Diagonal derecha arriba
        for (int ruR = i, ruC = j;  (ruR > 0 && ruC < 7) && isValid; --ruR, ++ruC) {
          if (chess[ruR-1][ruC+1] == '*') isValid = false;
        }
        
        //Diagonal izquierda abajo
        for (int ldR = i, ldC = j;  (ldR < 7 && ldC > 0) && isValid; ++ldR, --ldC) {
          if (chess[ldR+1][ldC-1] == '*') isValid = false;
        }
        
        //Diagonal derecha abajo
        for (int rdR = i, rdC = j;  (rdR < 7 && rdC < 7) && isValid; ++rdR, ++rdC) {
          if (chess[rdR+1][rdC+1] == '*') isValid = false;
        }
      }
    }
  }
  
  if (isValid) cout << "valid";
  else cout << "invalid";
  
  return 0;
}
