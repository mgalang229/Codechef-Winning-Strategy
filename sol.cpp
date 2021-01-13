#include <bits/stdc++.h>

using namespace std;

bool CMP(const int& a, const int& b) {
	return b < a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort in decreasing order to maximize their scores
		sort(a, a + n, CMP);
		long long p1 = 0;
		long long p2 = 0;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				// p1 will take the 1st turn
				p1 += a[i];
			} else if ((i == 1 || i == 2) && (n >= 2)) {
				// p2 will take the 2nd & 3rd turn
				p2 += a[i];
			} else if (i % 2 == 1) {
				// after the previous conditions are met:
				// p1 will take the odd turns (zero-based index)
				p1 += a[i];
			} else {
				// after the previous conditions are met:
				// p2 will take the even turns (zero-based index)
				p2 += a[i];
			}
		}
		if (p1 == p2) {
			cout << "draw";
		} else if (p1 > p2) {
			cout << "first";
		} else {
			cout << "second";
		}
		cout << '\n';
	}
	return 0;
}
