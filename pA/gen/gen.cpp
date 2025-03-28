#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int q = rnd.next(100000, 1000000);
	cout << q << '\n';
	while(q--) cout << rnd.next(1, 3) << ' ' << rnd.next(1, 1000000000) << '\n';
}
