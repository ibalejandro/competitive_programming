#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int
main() {
	string abc;
	while (cin >> abc && abc != "#") {
		if (next_permutation(abc.begin(), abc.end())) {
			cout << abc << endl;
		} else {
			cout << "No Successor" << endl;
		}
	}
	return 0;
}