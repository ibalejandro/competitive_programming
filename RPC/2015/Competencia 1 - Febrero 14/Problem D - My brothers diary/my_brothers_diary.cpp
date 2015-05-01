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

int
main() {
    map<char, int> abcTimes;
    char l = 'A';
    for (int i = 0; i < 26; ++i) {
     abcTimes[l] = 0;
     l++;
    }
    
    int entries;
    cin >> entries;
    cin.ignore();
    while (entries > 0) {
        string line;
        getline(cin, line);
        for (int j = 0; j < line.size(); ++j) {
            if (line[j] != ' ') {
                abcTimes[line[j]]++;
            }
        }
        l = 'A';
        int max = 0;
        char e;
        for (int k = 0; k < 26; ++k) {
            if (abcTimes[l] > max) {
                max = abcTimes[l];
                e = l;
            }
            l++;
        }
        l = 'A';
        bool notP = false;
        for (int k = 0; k < 26 && notP == false; ++k) {
            if (l != e && abcTimes[l] == max) notP = true;
            l++;
        }
        
        if (notP) {
            cout << "NOT POSSIBLE" << endl;
        }
        else {
            string text = "";
            int d = (e - 'E') < 0 ? (e - 'E') + 26 : (e - 'E');
            for (int m = 0; m < line.size(); ++m) {
                char x;
                int newLetter;
                if (line[m] != ' ') {
                    newLetter = (line[m] - d) < 65 ? (line[m] - d) + 26 : 
                                (line[m] - d);
                    x = (char) newLetter;
                    text += x;
                }
                else {
                    text += " ";
                }
            }
            cout << d << " " << text << endl;
        }
        
        l = 'A';
        for (int i = 0; i < 26; ++i) {
            abcTimes[l] = 0;
            l++;
        }
        entries--;
    }

  return 0;
}
