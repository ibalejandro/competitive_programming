#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>

using namespace std;

int main(){
    
    int players, matches;
    while (cin >> players >> matches) {
         int playersWhoScoredInEveryMatch = 0;
         for (int i = 0; i < players; i++) {
             //Este es para leer cada player
             
             bool goalInEveryMatch = true;
             for (int j = 0; j < matches; j++) {
                 //Este es para leer cada partido del jugador i
                 int matchGoals;
                 cin >> matchGoals;
                 if(matchGoals == 0) goalInEveryMatch = false; 
             }
             if(goalInEveryMatch) playersWhoScoredInEveryMatch++;
         }
          cout << playersWhoScoredInEveryMatch << endl;
    }
    
}
