#include <iostream>
#include <map>
using namespace std;
int main() {
	int q; cin >> q;
	map<int, int> mp;
	while(q--) {
		int a, b; cin >> a >> b;
		if(a == 1) mp[b]++;
		else if(a == 2) mp[b] = max(0, mp[b]-1);
		else cout << (mp[b] ? mp[b] : -1) << '\n';
	}
}
