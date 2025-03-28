#include "testlib.h"
using namespace std;
const int Max_Q = 1e6;
const int Max_A_value = 1e9;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	inf.readInt(1, MAXN, "n");
	int q = inf.readInt(1, Max_Q, "q");
	inf.readEoln();
	while(q--) {
		inf.readInt(1, Max_A_value, "a");
		if(q) inf.readSpace();
	}
	inf.readEoln();
	inf.readEof();
}
