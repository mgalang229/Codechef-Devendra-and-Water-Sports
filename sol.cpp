#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int z, y, a, b, c;
		cin >> z >> y >> a >> b >> c;
		// after subtracting y from z, check if the sum of a, b, and c is <= z
		z -= y;
		cout << (a + b + c <= z ? "YES" : "NO") << '\n';
	}
	return 0;
}