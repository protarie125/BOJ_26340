#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		int a, b, c;
		cin >> a >> b >> c;

		cout << "Data set: " << a << ' ' << b << ' ' << c << '\n';
		while (0 < (c--)) {
			if (a < b) {
				b /= 2;
			}
			else {
				a /= 2;
			}
		}

		const auto& a1 = a < b ? a : b;
		const auto& b1 = a < b ? b : a;
		cout << b1 << ' ' << a1 << "\n\n";
	}

	return 0;
}