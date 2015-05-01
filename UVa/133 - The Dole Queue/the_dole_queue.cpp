#include <iostream>
#include <vector>

using namespace std;

int
main() {
  int n, k, m;
  while (cin >> n >> k >> m && !(n == 0 && k == 0 && m == 0)) {
    vector <bool> people;
    for (int i = 0; i < n; ++i) {
        people.push_back(false);
    }
    int sentOff = 0;
    int countK = 0 ;
    int countM = n - 1;
    bool comma = false;
    
    while (sentOff < n) {
        if (comma) cout << ",";
        
        int i = countK;
        int j = countM;
        int peSentOffK = 0;
        int peSentOffM = 0;
        
        while (peSentOffK < k) {
            if (!people[i]) {
                countK = i;
                peSentOffK++;
            }
            i = (i+1) % n;
        }
        
        while (peSentOffM < m && sentOff < n) {
            if (!people[j]) {
                countM = j;
                if(countM < 0) countM += n;
                peSentOffM++;
            }
            j--;
            if(j < 0) j += n;
        }
       
        if(countK != countM) {
            printf("%3d%3d", countK+1, countM+1);
            sentOff += 2;
        } 
        else {
            printf("%3d", countK+1);
            sentOff++;
        }
        
        people[countK] = true;
        people[countM] = true;
        
        comma = true;
    }
    cout << endl;
  }
  
  return 0;
}
