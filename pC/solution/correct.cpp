#include <iostream>
#include <set>
using namespace std;
int main() {
	int q; cin >> q;
	set<int> se;
	while(q--) {
		int a, b; cin >> a >> b;
		if(a == 1) se.insert(b);
		else if(a == 2) se.erase(b);
		else {
			auto ub = se.upper_bound(b);
			if(ub == se.end()) cout << "Grandma ta las!\n";
			else cout << *ub << '\n';
		}
	}
}
