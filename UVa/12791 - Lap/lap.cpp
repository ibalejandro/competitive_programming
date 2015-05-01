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
    
    int velF;
    int velL;
    while(cin >> velF >> velL){
        int laps = 0;
        int diff = velL - velF;
        int acumDiff = diff;
        while(acumDiff < velL){
                   acumDiff += diff  ;
                   laps++;
        }
        laps++;
        cout << laps << endl;
    }
    
}
