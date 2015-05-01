#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }
 
template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

int
main() {
  string q;
  int h, m, s, lastTimeSec = 0;
  double lastSpeed = 0.00, distance = 0.00;
  while (getline(cin, q)) {
    stringstream ss(q);
    string buffer, time, speed = "";
    int cont = 0;
    //StringStream does tokenize by whitespaces by default.
    while (ss >> buffer) {
      if (cont == 0) time = buffer;
      else speed = buffer;
      cont++;
    }
    
    sscanf(time.c_str(), "%d:%d:%d", &h, &m, &s);
    int newTime = (h * 3600) + (m * 60) + s;
    newTime -= lastTimeSec; //Elapsed time from previous to current iteration.
    lastTimeSec = (h * 3600) + (m * 60) + s;
    
    distance += (lastSpeed * newTime);
    
    if (speed != "") lastSpeed = toInt(speed) / 3600.00;
    else printf("%s %.2f km\n", time.c_str(), distance);
    
  }
  return 0;
}
