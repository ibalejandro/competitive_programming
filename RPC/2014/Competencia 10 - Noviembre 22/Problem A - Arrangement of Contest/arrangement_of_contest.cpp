#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, int> c;
    while (n > 0) {
        string pN;
        cin >> pN;
        c[pN[0]] += 1;
        n--;
    }
    bool cS = true;
    char k = 'A';
    int gC = 0;
    for (int i = 0; i < c.size() && cS; ++i) {
        if (c.count(k)) {
            gC++;
            k++;
        } else {
            cS = false;
        }
    }
    cout << gC << endl;
    return 0;
}
