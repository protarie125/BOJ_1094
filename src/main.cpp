#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto x = int{};
	cin >> x;

	auto b = 64;
	auto ans = int{ 0 };
	while (0 < b) {
		const auto m = x & b;

		if (0 < m) {
			ans += 1;
		}

		b /= 2;
	}

	cout << ans;

	return 0;
}