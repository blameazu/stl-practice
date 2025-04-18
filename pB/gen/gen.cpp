#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int n = rnd.next(1, atoi(argv[1]));
	cout << n << '\n';
	while(n--) {
		cout << rnd.next(1, 3) << ' ' << rnd.next(1, 1000000000) << '\n';
	}
}
