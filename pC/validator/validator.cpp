#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	int n = inf.readInt(1, 1000000, "n");
	inf.readEoln();
	while(n--) {
		int c = inf.readInt(1, 3, "c");
		inf.readSpace();
		int a = inf.readInt(1, 1000000000, "a");
		inf.readEoln();
	}
	inf.readEof();
}
