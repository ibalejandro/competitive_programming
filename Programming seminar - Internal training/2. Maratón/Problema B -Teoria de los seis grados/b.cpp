#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>

#define MAXN 505

using namespace std;
  
vector <int> g[MAXN];
int d[MAXN];
int n;


void bfs (int from) { // from = fuente, n = numero de nodos
  for (int i = 0; i < n; ++i) d[i] = -1;
  queue <int> q;
  q.push(from); // Agregar la fuente a la cola
  d[from] = 0; // La distancia de la fuente es 0
  while (q.size() > 0){
    int cur = q.front(); q.pop();
    for (int i = 0; i < g[cur].size(); ++i){
      int next = g[cur][i];
      if (d[next] == -1){ // Si todava no lo he visitado
        d[next] = d[cur] + 1; // La distancia que llevo + 1
        q.push(next); // Agregarlo a la cola
      }
    }
  }
}

int
main() {
  map <string, int> names;
  string name;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> name;
    names[name] = i;
  }
  int m;
  cin >> m;
  string from, to;
  while (m > 0) {
    cin >> from >> to;
    g[names[from]].push_back(names[to]);
    g[names[to]].push_back(names[from]);
    m--;
  }
  
  int q;
  cin >> q;
  while (q > 0) {
    cin >> from >> to;
    bfs(names[from]);
    if (d[names[to]] > -1 && d[names[to]] <= 6) cout << "Aceptada" << endl;
    else cout << "Rechazada" << endl;
    q--;
  }
  
  return 0;
}
