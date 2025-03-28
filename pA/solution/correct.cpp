#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> se;
	int q; cin >> q;
	while(q--) {
		int c, a; cin >> c >> a;
		if(c == 1) se.insert(a);
		else if(c == 2) {if(se.find(a) != se.end()) se.erase(a);}
		else cout << (se.find(a) != se.end() ? "No\n" : "Yes\n");
	}
}
