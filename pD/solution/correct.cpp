#include <iostream>
#include <map>
using namespace std;
int main() {
	int q; cin >> q;
	map<string, int> mp;
	while(q--) {
		int c; cin >> c;
		if(c == 1) {
			string a; int b; cin >> a >> b;
			if(mp.count(a)) cout << "Already Exist!\n";
			else mp[a] = b;
		} else if(c == 2) {
			string a; cin >> a;
			mp.erase(a);
		} else if(c == 3) {
			string a; int b; cin >> a >> b;
			if(!mp.count(a)) cout << a << " is not exist!\n";
			else mp[a] = b;
		} else {
			string a; cin >> a;
			if(!mp.count(a)) cout << a << " is not exist!\n";
			else cout << mp[a] << '\n';
		}
	}
}
