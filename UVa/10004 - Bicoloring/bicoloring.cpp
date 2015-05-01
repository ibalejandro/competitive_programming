#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 205;
int n;
int m;
//Grafo y vector de colores.
vector <int> g[MAXN];
int colors[MAXN];

//Colores = Blanco (0) y 1 (Negro). -1 (No pintado).

bool
paint(int node, int c) {
    colors[node] = c;
    for (int i = 0; i < g[node].size(); ++i) {
        if (colors[g[node][i]] == c) return false;
        if (colors[g[node][i]] == -1) {
            return paint(g[node][i], 1 - c);
        }
    }
    return true;
}

int
main() {
  while (cin >> n && n) {
    for (int i = 0; i < n; ++i) {
        colors[i] = -1;
        //Borrar los datos del grafo anterior.
        g[i].clear();
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    printf("%s\n", paint(0, 0) ? "BICOLORABLE." : "NOT BICOLORABLE.");
  
  }
  return 0;
}
