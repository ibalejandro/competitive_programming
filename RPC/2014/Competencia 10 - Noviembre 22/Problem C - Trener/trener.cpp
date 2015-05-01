#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, int> t;
    while (n > 0) {
        string p;
        cin >> p;
        t[p[0]] += 1;
        n--;
    }
    char k = 'a';
    string o = "";
    for (int i = 0; i < t.size(); ++i) {
        if (t[k] >= 5) {
            o += k;
        }
        k++;
    }
    if (o.size() == 0) o = "PREDAJA";
    cout << o << endl;

    return 0;
}
