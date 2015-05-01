using namespace std;
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

int main(){
   
   vector <int> num;
   int i1, i2, i3, a1, a2, a3, n;
   i1 = i2 = i3 = 0;
   num.push_back(1);
   while(num.size() <= 1500){
      a1 = 2*num[i1];
      a2 = 3*num[i2];
      a3 = 5*num[i3];
      n = min(a1, min(a2, a3));
      if(a1 == n) i1++;
      if(a2 == n) i2++;
      if(a3 == n) i3++;
      num.push_back(n);
   }
   cout << "The 1500'th ugly number is " << num[1499] << "." << endl;
}
