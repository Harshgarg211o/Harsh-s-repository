#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	if (!(cin >> n)) return 0;
	if (n <= 0) {
		cout << "Please enter a positive integer.\n";
		return 0;
	}

	long long a = 0, b = 1;
	for (long long i = 0; i < n; ++i) {
		if (i == 0) cout << a;
		else if (i == 1) cout << ' ' << b;
		else {
			long long c = a + b;
			cout << ' ' << c;
			a = b;
			b = c;
		}
	}
	cout << '\n';
	return 0;
}
